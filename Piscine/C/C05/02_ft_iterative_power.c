/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:47:14 by bautret           #+#    #+#             */
/*   Updated: 2023/10/09 13:38:57 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main() 
{
    int number;
    int result;
    int power;

    number = 5;
    power = 3;
    result = ft_iterative_power(number, power);
    
    printf("input number is: %d\n", number);
    printf("input power is: %d\n", power);
    printf("result is: %d", result);

    return 0;
}
*/
