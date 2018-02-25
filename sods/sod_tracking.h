#ifndef SOD_TRACKING_H
# define SOD_TRACKING_H

# define VALIDATE
# define SOD_CHAN(e, s, v) check_and_change(e, s, v)

#include "grids.h"

void check_and_change(struct s_sod e, int value);
int sod_has_val(struct s_sod e, int n);
int get_first_empty(struct s_sod e);

#endif
