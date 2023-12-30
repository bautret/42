/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:27:00 by bautret           #+#    #+#             */
/*   Updated: 2023/10/03 12:25:44 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main() 
{
    char src[] = "Hello, World!";
    char dest[20];
    unsigned int n = 5;
    
    ft_strncpy (dest, src, n);
    
    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);
    
    return 0;
}
*/
