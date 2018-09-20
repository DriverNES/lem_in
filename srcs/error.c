/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndriver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:25:31 by ndriver           #+#    #+#             */
/*   Updated: 2018/09/20 12:08:49 by ndriver          ###   ########.fr       */
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
	exit(0);
}
