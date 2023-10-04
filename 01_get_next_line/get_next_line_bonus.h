#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstlast(t_list *lst);
t_list	*remove_last_element(t_list **lst);
char	*remove_last_element_helper(t_list *last, int i);
char	*get_next_line(int fd);
int		ft_strlen(const char *str);
bool	found_newline(t_list *list);
void	free_list(t_list *list);
void	append_buffer_to_list(t_list **list, char *buffer, int num_bytes);
void	generate_line(char **line, t_list *list);

#endif