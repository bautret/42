/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:34:06 by bautret           #+#    #+#             */
/*   Updated: 2023/10/03 16:03:02 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= '0' && str[counter] <= '9')
		{
			counter++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int main() 
{
    char str1[] = "HelloWorld";
    char str2[] = "123";

    if (ft_str_is_numeric(str1) == 1) 
    {
        printf("%s consists only of numeric characters.\n", str1);
    } 
    else 
    {
        printf("%s contains non-numeric characters.\n", str1);
    }

    if (ft_str_is_numeric(str2) == 1) 
    {
        printf("%s consists only of numeric characters.\n", str2);
    } 
    else 
    {
        printf("%s contains non-numeric characters.\n", str2);
    }

    return 0;
}
*/
