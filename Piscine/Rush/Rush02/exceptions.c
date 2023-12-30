/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:49:37 by bautret           #+#    #+#             */
/*   Updated: 2023/10/15 19:55:33 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush02.h"

int	exceptions(char *number)
{
	int	i;

	i = 0;
	while (number[i] != '\0')
	{
		if (number[i] == '.')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
