#ifndef		GRIDS_H
# define 	GRIDS_H
# define	MK_LINE(e) 		make_line(e)
# define	SOD_SUM(e) 		sum_of_sod(e)
# define	END_OF_SOD		9
# define	RESOLVE(s)		fill_sod(s)

typedef	struct	s_slot
{
	int 			value;
	unsigned	int	_const;
}				sod_slot;

typedef	struct	s_sod
{
	sod_slot *numbers;
	
}				sod_line;

typedef struct	s_sector
{
	struct s_sod;
	int	pos;
}				sod_sector;
int sum_of_sod(struct s_sod the_sod);
sod_line make_line(int *items);
sod_slot	spawn_slot(int value, int is_const);
int		get_slot_value(sod_slot e);
void	set_slot_value(sod_slot e, int value);
void	fill_sod(struct s_sod e);
#endif
