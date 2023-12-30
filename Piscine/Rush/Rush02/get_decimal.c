/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_decimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvishnio <vvishnio@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:46:37 by vvishnio          #+#    #+#             */
/*   Updated: 2023/10/15 17:29:04 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush02.h"

int	get_decimal(int number)
{
	if (number >= 90)
		return (90);
	else if (number >= 80)
		return (80);
	else if (number >= 70)
		return (70);
	else if (number >= 60)
		return (60);
	else if (number >= 50)
		return (50);
	else if (number >= 40)
		return (40);
	else if (number >= 30)
		return (30);
	else if (number >= 20)
		return (20);
	else if (number <= 20)
		return (number);
	else
		return (0);
}
