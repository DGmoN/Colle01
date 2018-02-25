
#include "../e_vals.h"
#include "grids.h"

void check_and_change(struct s_sod e, int value)
{
	int into;
	
	into = get_first_empty(e);
	printf("Changing: %i to %i\n", into, value);
	int i = 0;
	while (i < 9){
		printf("%i ", e.numbers[i++].value);
	}printf("\n");
	e.numbers[into].value = value;
}

int	sod_has_val(struct s_sod e, int n)
{
	int index;
	
	index = 0;
	while (index < END_OF_SOD)
	{
		if (e.numbers[index].value == n)
			return 1;
		index++;
	}
		
	return 0;
}

int	get_first_empty(struct s_sod e)
{
	int index;
	
	index = 0;
	while (index != END_OF_SOD)
		if (e.numbers[index++].value == 0)
			return (index - 1);
}
