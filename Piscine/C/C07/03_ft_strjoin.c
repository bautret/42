/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:18:49 by bautret           #+#    #+#             */
/*   Updated: 2023/10/16 12:37:15 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	full_strs_len(int size, char **strs, char *sep)
{
	int	i;
	int	full_str_len;

	full_str_len = 0;
	if (size < 1)
	{
		return (0);
	}
	i = 0;
	while (i++, i <= size)
	{
		full_str_len += ft_strlen(strs[i - 1]);
	}
	full_str_len += (size - 1) * ft_strlen(sep);
	return (full_str_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		full_str_len;
	char	*str_ct;

	full_str_len = full_strs_len(size, strs, sep);
	str_ct = malloc(full_str_len * sizeof(char) + 1);
	if (!str_ct)
		return (NULL);
	i = 0;
	full_str_len = 0;
	while (i++, i <= size)
	{
		j = 0;
		while (j++, full_str_len++, strs[i - 1][j - 1])
			str_ct[full_str_len - 1] = strs[i - 1][j - 1];
		j = 0;
		full_str_len--;
		while (j++, full_str_len++, sep[j - 1] && i < size)
			str_ct[full_str_len - 1] = sep[j - 1];
		full_str_len--;
	}
	str_ct[full_str_len] = '\0';
	return (str_ct);
}
/*
#include <stdio.h>
   
int main()
{
    char *strings[] = {"Hello", "world", "this", "is", "a", "test"};
    char *separator = " ";
    int size = 6;

    char *result = ft_strjoin(size, strings, separator);

    if (result == NULL)
    {
        printf("String concatenation failed.\n");
        return 1;
    }

    printf("Concatenated string: %s\n", result);

    free(result);

    return 0;
}
*/
