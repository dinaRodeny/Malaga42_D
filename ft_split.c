                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 21:30:48 by user              #+#    #+#             */
/*   Updated: 2026/10/04 21:30:48 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
    #include "libft.h"

    size_t	 ft_count_words(const char *s, char c)
    {
        size_t	count =0;
        size_t	 in_word = 0;
        if(!s)
            return(0);
        while(*s)
        {
            if(*s != c && !in_word)
            {
                in_word = 1;
                count++;
            }
            else if(*s == c)
            {
                in_word = 0;
            }
            s++;
        }
        return count;
        
    }
    static void	ft_free_split(char **str, size_t i)
    {
	    while (i > 0)
	    {
		    i--;
		    free(str[i]);
	    }
	    free(str);
    }

    size_t ft_word_length(const char *s, char c)
    {
        size_t length =0;
        if(!s)
            return 0;
        while(*s && *s != c)
        {
            length++;
            s++;
        }
        return length;
    }


    char **ft_split(const char *s, char c)
    {
        char  **str;
        size_t i =0;
        size_t j =0;
        size_t len;
         if(!s)                                                
            return(0);
        str=(char **) malloc((sizeof(char *)*(ft_count_words(s,c)+1)));
        if(!str)
            return NULL;
    
        while(*s)
        {
            if(*s != c) 
            {
                len = ft_word_length(s,c);
                str[i] = malloc((sizeof(char))*(len + 1));
                if(!str[i])
                {
                   ft_free_split(str, i);
                    return NULL;
                }    
               while(j<len)
               {
                   str[i][j]=*s;
                   j++;
                   s++;
            }   
               str[i][j]='\0';
               i++;
               j=0;     
            }  
            else
                    s++; 
        }
        str[i] = NULL;
        return str;
   }  
   /*
    int main()
    {
        char	**result;
	int		i;

	result = ft_split("HelloAWorldAThisAIsAAATest", 'A');
	if (!result)
		return (1);

	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
    }
    */