/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:42:22 by bautret           #+#    #+#             */
/*   Updated: 2023/10/11 11:54:58 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*
#include <stdio.h>
   
int main() 
{
    int number;
    int result;

    number = 5;
    result = ft_recursive_factorial(number);
    
    printf("input number is: %d\n", number);
    printf("result is: %d", result);
    
    return 0;
}
*/
