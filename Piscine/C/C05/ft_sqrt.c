/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:58:47 by bautret           #+#    #+#             */
/*   Updated: 2023/10/11 13:47:11 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i < nb && i < 46340)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}

/*
#include <stdio.h>

int main() 
{
    int number;
    int result; 
    
    number = 25;
    result = ft_sqrt(number);

    printf("input number: %d\n", number);
    printf("result: %d\n", result);

    return 0;
}
*/
