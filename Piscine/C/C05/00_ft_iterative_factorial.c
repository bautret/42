/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:36:19 by bautret           #+#    #+#             */
/*   Updated: 2023/10/09 13:34:12 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>

int main() 
{
    int number;
    int result;

    number = 5;
    result = ft_iterative_factorial(number);
    
    printf("input number is: %d\n", number);
    printf("result is: %d", result);

    return (0);
}
*/
