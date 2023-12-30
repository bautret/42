/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:28:06 by bautret           #+#    #+#             */
/*   Updated: 2023/10/16 11:35:10 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pnt;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	if (len < 1)
		pnt = NULL;
	else
	{
		pnt = malloc((len) * sizeof(int));
		if (!pnt)
			pnt = NULL;
		i = 0;
		while (i < len)
		{
			pnt[i] = (min + i);
			i++;
		}
	}
	return (pnt);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	len = max - min;
	if (len < 1)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = ft_range(min, max);
		if (!*range)
		{
			return (-1);
		}
	}
	return (len);
}
/*
#include <stdio.h>
   
int main()
{
    int min = 5;
    int max = 15;
    int *range = NULL;

    int len = ft_ultimate_range(&range, min, max);

    if (len == -1)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    else if (len == 0)
    {
        printf("Invalid input: min is greater than or equal to max.\n");
        return 1;
    }

    printf("Generated range(length = %d): ", len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);

    return 0;
}
*/
