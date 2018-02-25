/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:36:53 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/25 14:06:40 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "misc.h"
#include "grid_logic.h"
#include "str_util.h"

void init_line(char *e, int linen, grid g)
{
	int len;
	int count;

	len = str_len(e);
	if (len != MAX_INDEX)
	{
		put_str("The string is not the right length: ");
		put_str(e);
		put_str("\n");
		return;
	}
	
	count = 0;
	while (count < MAX_INDEX)
	{
		if (e[count] != '.')
			init_value(count, linen, '0', g);
		else
			init_value(count, linen, e[count], g);
		count++;
	}
}

void init_value(int x, int y, char value, grid e)
{
	if (value_preceeds(value - '0', y, x, e) && value != '0')
	{
		put_str("the value is already in use: ");
		put_char(value);
		put_char('\n');
		return;
	}
	e.blocks[y][x] = value - '0';
	if (value != '0')
		e.unchangeable[y][x] = &e.blocks[y][x]; 
}
