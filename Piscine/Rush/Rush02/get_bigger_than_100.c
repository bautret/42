/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bigger_than_100.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvishnio <vvishnio@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:12:15 by vvishnio          #+#    #+#             */
/*   Updated: 2023/10/15 17:28:47 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush02.h"

int	get_bigger_than_100(int number)
{
	if (number >= 1000000000)
		return (1000000000);
	else if (number >= 1000000)
		return (1000000);
	else if (number >= 1000)
		return (1000);
	else if (number >= 100)
		return (100);
	else
		return (get_decimal(number));
}
