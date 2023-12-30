/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:37:37 by bautret           #+#    #+#             */
/*   Updated: 2023/10/03 12:59:06 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z')
			|| (str[counter] >= 'a' && str[counter] <= 'z'))
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
    char str2[] = "123ABC";
    char str3[] = "ThisIsNotAlpha!";

    if (ft_str_is_alpha(str1) == 1) 
   {
        printf("%s is alpha.\n", str1);
    } 
   else 
    {
        printf("%s is not alpha.\n", str1);
    }

    if (ft_str_is_alpha(str2) == 1) 
    {
        printf("%s is alpha.\n", str2);
    } 
    else 
    {
        printf("%s is not alpha.\n", str2);
    }

    if (ft_str_is_alpha(str3) == 1) 
    {
        printf("%s is alpha.\n", str3);
    } 
    else 
    {
        printf("%s is not alpha.\n", str3);
    }

    return 0;
}
*/
