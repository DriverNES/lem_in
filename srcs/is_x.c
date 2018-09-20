/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndriver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 07:39:46 by ndriver           #+#    #+#             */
/*   Updated: 2018/09/20 11:51:08 by ndriver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem-in.h"

int		is_room(char *str)
{
	char	**tab;
	char	*tmp;
	int		i;

	i = -1;
	if (ft_cntwrd(str, ' ') != 3)
		return (0);
	tab = ft_strsplit(str, ' ');
	while (++i < 3)
	{
		tmp = ft_itoa(ft_atoi(tab[i]));
		if (!ft_strcmp(tab[i], tmp))
		{
			if (ft_atoi(tab[i]) < 0)
				error(3);
		}
		else
			error(3);
		free(tmp);
	}
    free(*tab);
    free(tab);
	return (1);
}

int     is_link(char *str)
{
    if (!ft_strstr(str, "-"))
        return (0);
    else
        if (ft_cntwrd(str, '-') != 2)
            error(4);
    return (1);
}