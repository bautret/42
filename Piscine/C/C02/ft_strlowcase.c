/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:26:09 by bautret           #+#    #+#             */
/*   Updated: 2023/10/03 12:30:39 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] += 32;
		}
		counter++;
	}
	return (str);
}
/*
#include <stdio.h>
int main() 
{
    char str1[] = "Hello, World!";
    char str2[] = "lowercase123";
    char str3[] = "MiXeD CaSe";

    printf("Original strings:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    ft_strlowcase(str1);
    ft_strlowcase(str2);
    ft_strlowcase(str3);

    printf("\nAfter converting to lowercase:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    return 0;
}
*/
