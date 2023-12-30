/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:05:35 by bautret           #+#    #+#             */
/*   Updated: 2023/10/03 12:27:51 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)

{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
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
    char str1[] = "hello";
    char str2[] = "Hello123";
    
    if (ft_str_is_lowercase(str1) == 1) 
    {
        printf("%s consists only of lowercase characters.\n", str1);
    } 
    else 
    {
        printf("%s contains non-lowercase characters.\n", str1);
    }

    if (ft_str_is_lowercase(str2) == 1) 
    {
        printf("%s consists only of lowercase characters.\n", str2);
    } 
    else 
    {
        printf("%s contains non-lowercase characters.\n", str2);
    }

    return 0;
}
*/
