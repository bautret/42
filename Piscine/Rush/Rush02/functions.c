/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  bfallah- < bfallah-@student.42berlin.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:29:06 by  bfallah-         #+#    #+#             */
/*   Updated: 2023/10/15 18:33:20 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "rush02.h"

int	check_file(int file_id, t_dictionary *dictionary)
{
	if (file_id == -1 || dictionary == NULL)
		return (1);
	return (0);
}

void	read_files(int file_id, char c[1])
{
	read(file_id, c, 1);
	while (c[0] == ' ')
		read(file_id, c, 1);
	if (c[0] == ':')
		read(file_id, c, 1);
	while (c[0] == ' ')
		read(file_id, c, 1);
}

t_dictionary	*extract(char *file)
{
	int				i;
	int				file_id;
	char			c[1];
	char			*tmp;
	t_dictionary	*dictionary;

	file_id = open(file, O_RDONLY);
	dictionary = malloc(sizeof(dictionary) * 43);
	if (check_file(file_id, dictionary) == 1)
	{
		return (NULL);
	}
	i = 0;
	while (i < 41)
	{
		dictionary[i].number = ft_atoi(ft_get_number_in_line(file_id));
		read_files(file_id, c);
		tmp = ft_get_str_in_line(file_id, c);
		dictionary[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(file_id);
	return (dictionary);
}
