/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:11:23 by bautret           #+#    #+#             */
/*   Updated: 2023/10/07 16:36:31 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] != '\0' && str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
			{
				return (&str[a]);
			}
			b++;
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main() 
{
    char str[] = "abcdef";
    char to_find[] = "cde";

    char *result = ft_strstr(str, to_find);

    if (result != NULL) 
    {
        printf("Substring found at position %ld: %s\n", result - str, result);
    } 
    else 
    {
        printf("Substring not found\n");
    }

    return 0;
}
*/
