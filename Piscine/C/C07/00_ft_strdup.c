/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:32:19 by bautret           #+#    #+#             */
/*   Updated: 2023/10/16 20:58:52 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	dest = malloc((src_len + 1) * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
   
int main()
{
    char original[] = "Hello, World!";
    char *copy = ft_strdup(original);

    if (copy == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Original string: %s\n", original);
    printf("Copied string: %s\n", copy);

    return 0;
}
*/
