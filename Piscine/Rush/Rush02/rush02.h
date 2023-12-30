/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:56:48 by bautret           #+#    #+#             */
/*   Updated: 2023/10/15 18:30:14 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

typedef struct s_list
{
	int		number;
	char	*val;
}	t_dictionary;

int				exceptions(char *number);
int				ft_atoi(const char *str);
char			*ft_get_number_in_line(int fd);
char			*ft_get_str_in_line(int fd, char *c);
void			ft_print(int n, t_dictionary *dictionary, int *first_space);
void			ft_putstr(char *str);
char			*ft_strdup(char *src);
int				get_bigger_than_100(int number);
int				get_decimal(int number);
int				check_file(int file_id, t_dictionary *dictionary);
void			read_files(int file_id, char c[1]);
t_dictionary	*extract(char *file);

#endif
