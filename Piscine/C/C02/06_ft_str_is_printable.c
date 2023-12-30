/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:25:31 by bautret           #+#    #+#             */
/*   Updated: 2023/10/03 16:15:13 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] >= 32 && str[counter] <= 126)
	{
		counter++;
	}
	if (str[counter] == '\0')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int main() 
{
    char str1[] = "Hello, World!";
    char str2[] = "Printable123";
    char str3[] = "\x07\x011\abcdf";

    if (ft_str_is_printable(str1) == 1) 
    {
        printf("%s consists only of printable characters.\n", str1);
    } 
    else 
    {
        printf("%s contains non-printable characters.\n", str1);
    }

    if (ft_str_is_printable(str2) == 1) 
    {
        printf("%s consists only of printable characters.\n", str2);
    } 
    else 
    {
        printf("%s contains non-printable characters.\n", str2);
    }

    if (ft_str_is_printable(str3) == 1) 
    {
        printf("%s consists only of printable characters.\n", str3);
    } 
    else 
    {
        printf("%s contains non-printable characters.\n", str3);
    }

    return 0;
}
*/
