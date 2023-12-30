/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:32:45 by bautret           #+#    #+#             */
/*   Updated: 2023/10/07 15:38:16 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main() 
{
    char str1[] = "Paris";
    char str2[] = "Marseille";
    
    int result = ft_strcmp(str1, str2);

    if (result == 0) 
    {
        printf("Both strings are equal.\n");
    } 
    else if (result < 0) 
    {
        printf("str1 is less than str2.\n");
    } 
    else 
    {
        printf("str1 is greater than str2.\n");
    }
    return 0;
}
*/
