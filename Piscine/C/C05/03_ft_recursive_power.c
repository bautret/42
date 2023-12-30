/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:52:00 by bautret           #+#    #+#             */
/*   Updated: 2023/10/09 13:39:31 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (ft_recursive_power(nb, power - 1) * nb);
}
/*
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main() 
{
    int number;
    int result;
    int power;
    

    number = 5;
    power = 3;
    result = ft_recursive_power(number, power);
    
    printf("input number is: %d\n", number);
    printf("input power is: %d\n", power);
    printf("result is: %d", result);

    return 0;
}
*/
