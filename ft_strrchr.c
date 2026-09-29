# include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    unsigned i = 0 ;
    unsigned cc= (unsigned char) c;
    char*last_occurrence=NULL;

    while(s[i])
    {
        if((unsigned char)s[i]==cc)
           last_occurrence= ((char *)&s[i]);
         i++;
    }
    if(cc=='\0')
    {
        last_occurrence=(char *)&s[i];
    }
   return(last_occurrence);
  
}
/*
int	main(void)
{
	const char *str = "Hello, World!";
    char *str1=ft_strrchr(str ,111);
	printf("String: %s\n", str);
	printf("Length: %s\n", str1);
	return (0);
}*/