#include "sods/grids.h"
#include "e_vals.h"
#include <stdio.h>

sod_line make_line(int *items);
int sum_of_sod(struct s_sod the_sod);



int	main(int argn, char *argc)
{
	int ns[10] = {1, 2, 3, 0, 5, 6, 7, 8, 0, -1};
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