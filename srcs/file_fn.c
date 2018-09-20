/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_fn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndriver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:45:21 by ndriver           #+#    #+#             */
/*   Updated: 2018/09/20 11:45:22 by ndriver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem-in.h"

void	fileop(t_farm *farm, int i)
{
	if (i == 0)
		check_ants(farm);
	else if (i == 1)
		check_se(farm);
	else if (i == 2)
		check_rooms(farm);
}

void	init_file(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_CREAT | O_RDWR | O_TRUNC, 0777);
	while (get_next_line(0, &line) > 0)
		ft_putendl_fd(line, fd);
	free(line);
	close(fd);
}

void	do_checks(t_farm *farm)
{
	int i;

	i = -1;
	while (++i < 3)
		fileop(farm, i);
}
