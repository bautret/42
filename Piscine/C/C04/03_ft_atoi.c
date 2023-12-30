/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:14:45 by bautret           #+#    #+#             */
/*   Updated: 2023/10/08 16:38:01 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	s;

	i = 0;
	n = 0;
	s = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' )
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	if (s % 2)
		return (-n);
	return (n);
}
/*
#include <stdio.h>

int ft_atoi(char *str);

int main() 
{
    char str[] = "   ---+--+1234ab567";
    
    int result = ft_atoi(str);
    
    printf("The converted integer is: %d\n", result);
    
    return 0;
}
*/
