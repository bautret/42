/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:44:42 by bautret           #+#    #+#             */
/*   Updated: 2023/10/07 11:59:06 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = 1;
		while (y < size)
		{
			if (tab[y] < tab[y -1])
			{
				ft_swap(&tab[y], &tab[y - 1]);
			}
			y++;
		}
		x++;
	}
}
/*
#include <stdio.h>

int main()
{
    int array[] = {5, 2, 9, 1, 5, 6, 9, 1, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    ft_sort_int_tab(array, size);

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/
