/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:06:55 by bautret           #+#    #+#             */
/*   Updated: 2023/10/11 15:11:30 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_show_nb(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a;
		while (b <= '8')
		{
			c = b;
			while (c <= '9')
			{
				if (a != b && b != c && c != a)
					ft_show_nb (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
