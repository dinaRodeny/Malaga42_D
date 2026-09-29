/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 17:17:02 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/29 22:58:21 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	skip_spaces(const char *str)
{
	int	i;
    
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	return (i);
}

static int	get_sign(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

static int	get_number(const char *str, int *i)
{
	int	number;

	number = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		number = number * 10 + (str[*i] - '0');
		(*i)++;
	}
	return (number);
}

int	ft_atoi( const char *str)
{
	 int 	i;
	 int	sign;
	 int	number;

	i = skip_spaces(str);
	sign = get_sign(str, &i);
	number = get_number(str, &i);
	return (number * sign);
}
/*
int	main(void)
{
	char	x[] = " ---+--+1234ab567";
	int		y;

	y = ft_atoi(x);
	printf("%d", y);
}
*/