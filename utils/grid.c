/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:36:53 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/25 14:50:47 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "misc.h"
#include "grid_logic.h"
#include "str_util.h"
#include "errors.h"




int init_line(char *e, int linen, grid *g)
{
	int len;
	int count;

	len = str_len(e);
	if (len != MAX_INDEX)
		str_len_error(e);
	
	count = 0;
	while (count < MAX_INDEX)
	{
		if(!init_value(count, linen, e[count], g))
			return (0);
		count++;
	}
	return (1);
}

int init_value(int x, int y, char value, grid *e)
{
	int real_value;
	
	if (value == '.')
		real_value = 0;
	else
		real_value = value - '0';
	
	if (value_preceeds(real_value, y, x, *e))
		return value_in_use(real_value, y);
	e->blocks[y][x] = real_value;
	e->unchangeable[y][x] = &e->blocks[y][x];  
	return (1);
}

int is_slot_editable(int slot, int line, grid e)
{
	return (*e.unchangeable[line][slot] == 0);
}
