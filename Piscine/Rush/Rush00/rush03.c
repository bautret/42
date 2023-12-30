/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:55:32 by bautret           #+#    #+#             */
/*   Updated: 2023/10/01 12:17:53 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int width, char first, char middle, char last)
{
	int	counter_column;

	counter_column = 1;
	ft_putchar(first);
	while (counter_column <= width - 2)
	{
		ft_putchar(middle);
		counter_column++;
	}
	if (width > 1)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter_line;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	if (y == 1)
	{
		ft_print_line(x, 'A', 'B', 'C');
		return ;
	}
	counter_line = 1;
	ft_print_line(x, 'A', 'B', 'C');
	while (counter_line <= y - 2)
	{
		ft_print_line(x, 'B', ' ', 'B');
		counter_line++;
	}
	if (y > 1)
	{
		ft_print_line(x, 'A', 'B', 'C');
	}
}
