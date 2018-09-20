/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndriver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:04:05 by ndriver           #+#    #+#             */
/*   Updated: 2018/09/20 13:18:37 by ndriver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem-in.h"

void	check_ants(t_farm *farm)
{
	int		fd;
	int		i;
	char	*line;
	char	*tmp;

	i = 0;
	line = malloc(100);
	fd = open("file.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		tmp = ft_itoa(ft_atoi(line));
		if (i == 0 && !ft_strcmp(line, tmp))
		{
			farm->isants = 1;
			farm->numants = ft_atoi(tmp);
		}
		i++;
		free(tmp);
	}
	if (farm->isants != 1 || farm->numants < 1)
		error(2);
	free(line);
	close(fd);
}

void	check_se(t_farm *farm)
{
	int		fd;
	char	*line;

	line = malloc(100);
	fd = open("file.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		if (!ft_strcmp(line, "##start"))
		{
			farm->valstart++;
			get_next_line(fd, &line);
			!is_room(line) ? error(1) : (farm->startroom = ft_atoi(line));
		}
		else if (!ft_strcmp(line, "##end"))
		{
			farm->valend++;
			get_next_line(fd, &line);
			!is_room(line) ? error(1) : (farm->endroom = ft_atoi(line));
		}
	}
	(farm->valstart != 1 && farm->valend != 1) ? error(1) : do_nothing();
	free(line);
	close(fd);
}

void	check_rooms(t_farm *farm)
{
	int		i;
	int		fd;
	char	*line;

	i = 0;
	line = malloc(100);
	fd = open("file.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		if (is_room(line))
			i++;
	close(fd);
	farm->numrooms = i;
	if (farm->numrooms < 1)
		error(3);
}

void    check_links(t_farm *farm)
{
    int     i;
    int     fd;
    char    *line;

    i = 0;
    fd = open("file.txt", O_RDONLY);
    while (get_next_line(fd, &line) > 0)
        if (is_link(line))
            i++;
    close(fd);
    farm->numlinks = i;
    if (farm->numlinks < 1)
        error(4);
    ft_putnbr(farm->numlinks);
}