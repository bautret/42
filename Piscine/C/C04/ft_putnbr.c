/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:52:38 by bautret           #+#    #+#             */
/*   Updated: 2023/10/08 15:47:59 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int number)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (number < 0)
	{
		ft_putchar('-');
		ft_putnbr(-number);
	}
	else if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_putchar(number + '0');
	}
}
/*
int	main()
{
	int num = -3569;
	ft_putnbr(num);
}
*/
