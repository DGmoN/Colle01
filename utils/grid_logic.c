/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_logic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:45:59 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/25 14:04:11 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "misc.h"
int value_preceeds(int value, int line, int skip, grid e)
{
	int index;

	if (value == 0)
		return (0);
	
	index = 0;
	while (index >= 0)
	{
		if (e.blocks[line][index] == value && index != skip)
			return (1);
		index--;
	}
	return (0);
}

int value_preceeds_vertical(int value, int line, int skip, grid e)
{
	int index;

	if (value == 0)
		return (0);
	
	index = 0;
	while (index >= 0)
	{
		if (e.blocks[index][line] == value && index != skip)
			return (1);
		index--;
	}
	return (0);
}