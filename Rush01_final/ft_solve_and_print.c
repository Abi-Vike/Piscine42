/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_and_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroux <aroux@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:44:54 by aroux             #+#    #+#             */
/*   Updated: 2024/02/11 21:22:49 by aroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_print_solution(int arr[4][4]);

void	ft_solve_with_constr(int r_const[8], int c_const[8], int grid[4][4])
{
	ft_initialize_grid(grid);
	ft_apply_row_constraints_left(r_const, grid);
	ft_apply_row_constraints_right(r_const, grid);
	ft_apply_col_constraints_up(c_const, grid);
	ft_apply_col_constraints_down(c_const, grid);
	if (ft_solve(grid, 0, 0))
	{
		ft_print_solution(grid);
	}
	else
	{
		write(1, "No solution found\n", 18);
	}
}

void	ft_print_solution(int arr[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			ft_putnbr(arr[i][j]);
			ft_putstr(" ");
			j++;
		}
		ft_putnbr(arr[i][j]);
		write(1, "\n", 1);
		i++;
	}
}
