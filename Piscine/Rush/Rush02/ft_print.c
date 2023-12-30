/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvishnio <vvishnio@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:27:44 by vvishnio          #+#    #+#             */
/*   Updated: 2023/10/15 17:27:13 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush02.h"

void	ft_print(int n, t_dictionary *dictionary, int *first_space)
{
	int	i;
	int	mult;

	i = 0;
	mult = get_bigger_than_100(n);
	if (mult >= 100)
		ft_print(n / mult, dictionary, first_space);
	if (*first_space == 0)
		write(1, " ", 1);
	*first_space = 0;
	while (dictionary[i].number != mult)
		i++;
	ft_putstr(dictionary[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, dictionary, first_space);
}
