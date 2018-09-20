/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndriver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:25:31 by ndriver           #+#    #+#             */
/*   Updated: 2018/09/20 12:51:11 by ndriver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem-in.h"

void	error(int n)
{
	if (n == 1)
		ft_putendl("Invalid start/end.");
	else if (n == 2)
		ft_putendl("Invalid ants.");
	else if (n == 3)
		ft_putendl("Invalid room(s).");
	else if (n == 3)
		ft_putendl("No rooms.");
	else if (n == 4)
		ft_putendl("Invalid link(s).");
	exit(0);
}
