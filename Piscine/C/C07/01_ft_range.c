/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:27:24 by bautret           #+#    #+#             */
/*   Updated: 2023/10/16 10:35:58 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pnt;
	int	len;
	int	i;

	if (min >= max)
		pnt = NULL;
	len = max - min;
	if (len < 1)
		pnt = NULL;
	else
	{
		pnt = malloc ((len) * sizeof (int));
		if (!pnt)
			pnt = NULL;
		i = 0;
		while (i < len)
		{
			pnt[i] = min + i;
			i++;
		}
	}
	return (pnt);
}
/*
#include <stdio.h>

int main()
{
    int min = 10;
    int max = 10;

    int *range = ft_range(min, max);

    if (range == NULL)
    {
        printf("Invalid input or memory allocation failed.\n");
        return 1;
    }

    printf("Generated range: ");
    for (int i = 0; i < max - min; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    return 0;
}
*/
