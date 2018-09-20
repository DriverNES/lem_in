/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_fn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndriver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:45:21 by ndriver           #+#    #+#             */
/*   Updated: 2018/09/20 13:18:34 by ndriver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem-in.h"

void	fileop(t_farm *farm, int i)
{
	if (i == 0)
		check_ants(farm);
	else if (i == 1)
		check_rooms(farm);
	else if (i == 2)
		check_se(farm);
	else if (i == 3)
		check_links(farm);
}

void	do_checks(t_farm *farm)
{
	int i;

	i = -1;
	while (++i < 4)
		fileop(farm, i);
}

void	do_nothing(void)
{
	return ;
}