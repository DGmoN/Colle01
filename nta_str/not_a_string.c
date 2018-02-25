#include <stdlib.h>

sod_line parse_str(char *e)
{
	int len;
	int *ret; 

	len = str_len(e);
	if (len < END_OF_SOD)
		return NULL;
	
}

int str_len(char *e)
{
	int index;

	index = 0;
	while (e[index])
		index++;
	return (index);
}

sod_bool is_valid_sod(char *e)
{
	int index;

	index = 0;
	while (e[index])
	{
		if !((9 <= e[index] - '0' || e[index] == '.'))
			return (FALSE);
		index++;
	}
	return (TRUE);
}
