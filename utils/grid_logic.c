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

int value_preceeds(int value, int line, int start, grid e)
{
	int index;

	index = start;
	while (index >= 0)
	{
		if (e.blocks[line][index] == value)
			return (1);
		index--;
	}
	return (0);
}
