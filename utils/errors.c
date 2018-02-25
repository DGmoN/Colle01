#include "errors.h"
#include "str_util.h"

int	insufficient_args()
{
	put_str("You need 9 arguments for this to work.\n");
	return (-1);
}

int value_in_use(int value, int y)
{
	put_str("the value is already in use: >");
	put_char(value + '0');
	put_str("<\n");
	put_str("on line: ");
	put_char(y + '0');
	return (0);
}

int str_len_error(char *e)
{
	put_str("The string is not the right length: ");
	put_str(e);
	put_str("\n");
	return (0);
}