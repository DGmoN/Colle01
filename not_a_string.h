#ifndef NOT_A_STRING_H
# define NOT_A_STRING_H

#include <stdlib.h>
#include "not_a_string.h"
#include "sods/grids.h"
#include "sods/sod_tracking.h"
#include "e_vals.h"

sod_line *parse_sod(char *e);
sod_bool is_valid_sod(char *e);
#endif
