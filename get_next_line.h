#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <fcntl.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <ctype.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}					t_list;
void	clean_list(t_list **list);
char	*get_line(t_list *list);
void	link_new_node(t_list **list, char *buf);
int		create_list(t_list **list, int fd);
char	*get_next_line(int fd);
int		find_nl(t_list *list);
t_list	*find_last_node(t_list *list);
void	copy_str(t_list *list, char *str);
int		len_to_nl(t_list *list);
void	free_nodes(t_list **list, t_list *clean_node, char *buf);

#endif
