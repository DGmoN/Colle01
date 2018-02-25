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

int	main(int argn, char **args)
{
	int index;

	if (argn - 1 != MAX_INDEX)
	{
		put_str("You need 9 arguments for this to work.\n");
		return (-1);
	}

	grid sodoku;
	index = 0;
	while (index < MAX_INDEX)
	{
		if (!init_line(args[index + 1], index, &sodoku))
			return (-1);
		index++;
	}
	index = 0;
	int ind2 = 0;
	while (index < MAX_INDEX)
	{
		ind2 = 0;
		while(ind2 < MAX_INDEX)
			put_char(sodoku.blocks[index][ind2++] + '0');
		put_char('\n');
		index++;
	}
}
