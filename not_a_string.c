#include <stdlib.h>
#include "not_a_string.h"
#include "sods/grids.h"
#include "sods/sod_tracking.h"

sod_line *parse_sod(char *e)
{
	int len;
	int *ret;
	int index;
	sod_line rsod;

	len = str_len(e);
	if (len < END_OF_SOD)
		return (NNULL);
	printf("sod length O.K.\n");
	if (is_valid_sod(e) == FALSE)
		return (NNULL);
	printf("sod O.K.\n");
	ret = (int *)malloc(END_OF_SOD * sizeof(int));
	index = 0;
	while (index < END_OF_SOD)
	{
		if (e[index] == '.')
			ret[index] = 0;
		else
			ret[index] = '0' - ret[index];
		index++;
	}
	rsod = make_line(ret);
	return (&rsod);
}

int str_len(char *e)
{
	int index;
	printf("checking length\n");
	index = 0;
	while (e[index] > 0)
	{
		index++;
	}
	return (index);
}

sod_bool is_valid_sod(char *e)
{
	int index;

	index = 0;
	printf("%s\n", e);
	while (index < END_OF_SOD)
	{
		if (!('9' <= e[index] <= '1' || e[index] == '.'))
			return (FALSE);
		index++;
	}
	return (TRUE);
}
