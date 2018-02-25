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
	
}
