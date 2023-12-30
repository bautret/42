/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:13:33 by bautret           #+#    #+#             */
/*   Updated: 2023/10/03 12:25:10 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)

{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main() 

{
    char src[] = "Hello, World!";
    char dest[20];
    
    ft_strcpy(dest, src);
    
    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);
    
    return 0;
}
*/
