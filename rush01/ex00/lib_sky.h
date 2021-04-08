#ifndef lib_sky
# define lib_sky

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_free_malloc(int **board, int **clues, int size);
int		**ft_fill_clue_tabs(int **clues, char *values, int size);
int		**ft_fill_boards(int **board, int size);
int		check_input(char *values);
int		**initialize_boards(int **board, int size);
void    print_board(int **board, int size);
int		check_l_c(int **board, int nbtest, int l, int c);
int		**start_solve(int **board, int **clues, int size);
int		**start2_solve(int **board, int **clues, int size);
int		**next_solve(int **board, int **clues, int size);
int		**next2_solve(int **board, int **clues, int size);
int		check_clues(int **clues);
int		check_clues2(int **clues);

#endif
