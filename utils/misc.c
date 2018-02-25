/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:38:24 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/25 13:40:00 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "misc.h"
#include "str_util.h"
int str_len(char *e)
{
	int index;

	index = 0;
	while (e[index])
		index++;
	return index;
}

void print_grid(grid e)
{
	int y;
	
	y = 0;
	while (y < MAX_INDEX)
		print_line(e.blocks[y++]);
}

void print_line(int *p)
{
	int x;
	
	x = 0;
	while (x < MAX_INDEX)
		put_char((p[x++]) + 48);
	put_char('\n');
}