/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndriver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 07:39:46 by ndriver           #+#    #+#             */
/*   Updated: 2018/09/20 11:51:08 by ndriver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem-in.h"

t_farm	*init_farm(void)
{
	t_farm *farm;

	farm = (t_farm *)malloc(sizeof(t_farm));
	farm->valstart = 0;
	farm->valend = 0;
	farm->isants = 0;
	farm->numants = -1;
    farm->numrooms = 0;
    farm->numlinks = 0;
    farm->endroom = -1;
    farm->startroom = -1;
	return (farm);
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