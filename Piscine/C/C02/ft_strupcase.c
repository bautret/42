/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:20:32 by bautret           #+#    #+#             */
/*   Updated: 2023/10/03 12:29:43 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)

{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] -= 32;
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
    char str2[] = "UPPERCASE123";
    char str3[] = "MiXeD CaSe";

    printf("Original strings:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    ft_strupcase(str1);
    ft_strupcase(str2);
    ft_strupcase(str3);

    printf("\nAfter converting to uppercase:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    return 0;
}
*/
