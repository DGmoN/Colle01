/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:26:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/25 14:47:14 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/str_util.h"
#include "utils/grid.h"
#include "utils/errors.h"
#include "utils/misc.h"
#include "utils/grid_logic.h"

int	main(int argn, char **args)
{
	int index;

	if (argn - 1 != MAX_INDEX)
		return (insufficient_args());

	grid sodoku;
	index = 0;
	while (index < MAX_INDEX)
	{
		if (!init_line(args[index + 1], index, &sodoku))
			return (-1);
		index++;
	}
	
	print_grid(sodoku);
	int modfier = 0;
	int lowest;
	int empty;
	index = 0;
	int line = 0;
	while (index < MAX_INDEX)
	{
		lowest = get_lowest_value(sodoku, line);
		empty = get_first_empty(sodoku, line);
		if (!value_preceeds_vertical(lowest, empty, 0, sodoku))
		{
			sodoku.blocks[line][empty] = lowest;
		}
		index++;
	}
	put_str("------------------------\n");
	print_grid(sodoku);
}
