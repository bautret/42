/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:43:12 by bautret           #+#    #+#             */
/*   Updated: 2023/10/07 17:16:40 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main() 
{
    char str1[] = "Paris";
    char str2[] = "Marseille";
    unsigned int n = 3;

    int result = ft_strncmp(str1, str2, n);

    if (result == 0) 
    {
        printf("The first %u characters of both strings are equal.\n", n);
    } 
    else if (result < 0) 
    {
        printf("The first %u characters of str1 are less than str2.\n", n);
    } 
    else 
    {
        printf("The first %u characters of str1 are greater than str2.\n", n);
    }

    return (0);
}
*/
