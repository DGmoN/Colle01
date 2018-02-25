#include "sods/grids.h"
#include "sods/sod_tracking.h"
#include "not_a_string.h"
#include "e_vals.h"
#include <stdio.h>

int	main(int argn, char **argc)
{
	int index;
	sod_line *lines;

	index = 0;
	lines = (sod_line *)malloc(sizeof(sod_line) * END_OF_SOD);  
	while (index < (argn -1))
	{
		lines[index] = *parse_sod(argc[index + 1]);
		index++;
	}

	fill_sod(lines[0]);

	index = 0;
	while (index < END_OF_SOD)
		printf("%i ",lines[0].numbers[index++].value);

}
