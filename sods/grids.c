#include <stdlib.h>
#include "grids.h"
#include "sod_tracking.h"
#include <stdio.h>

sod_slot	spawn_slot(int value, int is_const)
{
	sod_slot q;
		
	q._const = is_const;
	q.value = value;
	return q;
}

sod_line make_line(int *items)
{
	int index;
	sod_line ret;
	sod_slot slot;
	
	ret.numbers = (sod_slot *)malloc(sizeof(sod_slot) * 10);
	index = 0;
	while (index < 9)
	{
		if(items[index] == 0)
			slot = (spawn_slot(0, 0));
		else
			slot = (spawn_slot(items[index], 1));
		ret.numbers[index] = slot;
		index++;
	}
	
	return (ret);
}

void	set_slot_value(sod_slot e, int value)
{
	e.value = value;
}

int		get_slot_value(sod_slot e)
{
	return e.value;
}

int sum_of_sod(struct s_sod the_sod)
{
	int index;
	int ret;
	
	ret = 0;
	index = 0;
	while (index < END_OF_SOD)
		ret += the_sod.numbers[index++].value;

	return (ret);
}


void	fill_sod(struct s_sod e)
{
	int sum;
	int index;
	int has_slot;
	int offset;
	
	sum = sum_of_sod(e);
	if ( sum == 45)
		return;
	offset = 0;
	has_slot = 0;
	index = 0;
	while (index < END_OF_SOD)
	{
		has_slot = sod_has_val(e, index + 1);
		if (!has_slot)
			check_and_change(e, index + 1);
		index++;
	}	
}


