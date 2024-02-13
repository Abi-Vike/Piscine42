/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:41:18 by aroux             #+#    #+#             */
/*   Updated: 2024/02/11 20:30:27 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_input(int a, char *str, int size);
int		ft_is_digit(char digit, int size);
void	ft_fill_arrays(char *input, int *colc, int *rowc);
void	ft_print_solution(int arr[4][4]);
int		ft_is_valid(int grid[4][4], int row, int col, int num);
int		ft_solve(int grid[4][4], int row, int col);
void	ft_initialize_grid(int grid[4][4]);
void	ft_apply_row_constraints_left(int r_const[8], int grid[4][4]);
void	ft_apply_row_constraints_right(int r_const[8], int grid[4][4]);
void	ft_apply_col_constraints_up(int c_const[8], int grid[4][4]);
void	ft_apply_col_constraints_down(int c_const[8], int grid[4][4]);
void	ft_solve_with_constr(int r_const[8], int c_const[8], int grid[4][4]);
void	ft_putchar(char c);
void	ft_putstr(char *c);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
