/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:42:51 by bautret           #+#    #+#             */
/*   Updated: 2023/10/07 15:47:16 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < nb)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest [a + b] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main() 
{
    char dest[100] = "It is simple the secret is ";
    char src[] = "to use your brain";
    int n = 6; 

    ft_strncat(dest, src, n);

    printf("%s", dest);

    return 0;
}
*/
