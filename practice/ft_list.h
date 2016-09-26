#ifndef FT_LIST
# define FT_LIST

typedef struct s_list
{
	struct  s_list	*next;
	int				data;
}					t_list;

#endif