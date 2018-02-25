/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:33:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/25 14:45:34 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GRID_H
# define GRID_H
# define MAX_INDEX 9

typedef struct	s_grid
{
	int		blocks[MAX_INDEX][MAX_INDEX];
	int		*unchangeable[MAX_INDEX][MAX_INDEX];
	int		*rows[MAX_INDEX];
	int		*columns[MAX_INDEX];
}				grid;

int init_line(char *e, int linen, grid *g);
int init_value(int x, int y, char value, grid *e);


#endif
