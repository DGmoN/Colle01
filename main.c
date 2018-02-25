#include "sods/grids.h"
#include "sods/not_a_sting.h";
#include "e_vals.h"
#include <stdio.h>

sod_line make_line(int *items);
int sum_of_sod(struct s_sod the_sod);



int	main(int argn, char **argc)
{
	int index;
	sod_line *lines;

	if (argn - 1 < END_OF_SOD)
	  return -1;	
	index = 0;
	lines = (sod_line *)malloc(sizeof(sod_line) * END_OF_SOD);  
	while (index < END_OF_SOD)
	{
		lines[index] = parse_str(argc[index]);
		index++;
	}

	int ns[10] = {1, 9, 3, 0, 5, 6, 0, 8, 0, -1};
	sod_line ss;
	
	ss = MK_LINE(ns);
	int i = 0;
	sod_slot pnts;
	while (i < 9){
		pnts = ss.numbers[i++];
		printf("%i ", pnts.value);
	}
	printf("\n");
	fill_sod(ss);
	printf("\nsum: %i\n", SOD_SUM(ss));
	i = 0;
	while (i < 9){
		pnts = ss.numbers[i++];
		printf("%i ", pnts.value);
	}
	printf("\nsum: %i\n", SOD_SUM(ss));
}
