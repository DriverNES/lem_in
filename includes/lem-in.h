/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndriver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:06:31 by ndriver           #+#    #+#             */
/*   Updated: 2018/09/20 12:31:40 by ndriver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "../libft/libft.h"
# include <fcntl.h>

typedef struct	s_farm
{
	int			valstart;
	int			valend;
	int			isants;
	int			numants;
	int			numrooms;
	int			startroom;
	int			endroom;
	
}				t_farm;

void			error(int n);
t_farm			*init_farm(void);
void			fileop(t_farm *farm, int i);
void			init_file(void);
void			check_se(t_farm *farm);
void			check_ants(t_farm *farm);
void			check_rooms(t_farm *farm);
void			do_checks(t_farm *farm);
void			do_nothing(void);
int				is_room(char *str);
#endif
