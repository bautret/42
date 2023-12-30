/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  bfallah- < bfallah-@student.42berlin.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:21:03 by bfallah-          #+#    #+#             */
/*   Updated: 2023/10/15 20:56:53 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "rush02.h"

int	check_zero(int acg, char **avg)
{
	if (acg == 2)
	{
		if (ft_atoi(avg[1]) == 0)
		{
			write(1, "zero", 4);
			return (0);
		}
	}
	else if (acg == 3)
	{
		if (ft_atoi(avg[2]) == 0)
		{
			write(1, "zero", 4);
			return (0);
		}
	}
	else
		return (1);
}

int	write_err(char **avg, int i)
{
	if (ft_atoi(avg[i]) < 0)
	{
		write(1, "Error", 5);
		return (1);
	}
}

int	main(int acg, char **avg)
{
	t_dictionary	*dict;
	int				st;
	int				a1st;
	int				exp;

	if (check_zero(acg, avg) != 0)
	{
		a1st = 1;
		st = a1st;
		if (acg == 3 && exceptions(avg[2]) == 1)
		{
			if (write_err(avg, 2) == 1) 
				return (0);
			dict = extract(avg[1]);
			ft_print(ft_atoi(avg[2]), dict, &st);
		}
		else
		{
			if (write_err(avg, 1) == 1)
				return (0);
			dict = extract("./numbers.dict");
			ft_print(ft_atoi(avg[1]), dict, &st);
		}
	}
	return (0);
}
