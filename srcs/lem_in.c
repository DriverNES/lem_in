/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndriver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 07:39:46 by ndriver           #+#    #+#             */
/*   Updated: 2018/09/20 11:51:08 by ndriver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem-in.h"

int		main(void)
{
	char	*line;
	int		fd;
	t_farm	*farm;

	farm = init_farm();
	init_file();
	do_checks(farm);
	fd = open("file.txt", O_RDONLY);
	line = malloc(100);
	while (get_next_line(fd, &line) > 0)
		ft_putendl(line);
	close(fd);
}
