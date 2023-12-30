/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:11:22 by bautret           #+#    #+#             */
/*   Updated: 2023/10/03 12:28:37 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
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
    char str1[] = "HELLO";
    char str2[] = "Hello123";
    
    if (ft_str_is_uppercase(str1) == 1) 
    {
        printf("%s consists only of uppercase characters.\n", str1);
    } 
    else 
    {
        printf("%s contains non-uppercase characters.\n", str1);
    }

    if (ft_str_is_uppercase(str2) == 1) 
    {
        printf("%s consists only of uppercase characters.\n", str2);
    } 
    else 
    {
        printf("%s contains non-uppercase characters.\n", str2);
    }

    return 0;
}  
*/
