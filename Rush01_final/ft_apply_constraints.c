/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_constraints.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroux <aroux@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:16:00 by aroux             #+#    #+#             */
/*   Updated: 2024/02/11 21:17:45 by aroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h" 

void	ft_apply_row_constraints_left(int r_const[8], int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (r_const[i] == 1)
		{
			grid[i][0] = 4;
		}
		else if (r_const[i] == 4)
		{
			grid[i][3] = 4;
			grid[i][2] = 3;
			grid[i][1] = 2;
			grid[i][0] = 1;
		}
		i++;
	}
}

void	ft_apply_row_constraints_right(int r_const[8], int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (r_const[i + 4] == 1)
		{
			grid[i][3] = 4;
		}
		else if (r_const[i + 4] == 4)
		{
			grid[i][3] = 1;
			grid[i][2] = 2;
			grid[i][1] = 3;
			grid[i][0] = 4;
		}
		i++;
	}
}

void	ft_apply_col_constraints_up(int c_const[8], int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (c_const[i] == 1)
		{
			grid[0][i] = 4;
		}
		else if (c_const[i] == 4)
		{
			grid[3][i] = 4;
			grid[2][i] = 3;
			grid[1][i] = 2;
			grid[0][i] = 1;
		}
		i++;
	}
}

void	ft_apply_col_constraints_down(int c_const[8], int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (c_const[i + 4] == 1)
		{
			grid[3][i] = 4;
		}
		else if (c_const[i + 4] == 4)
		{
			grid[3][i] = 1;
			grid[2][i] = 2;
			grid[1][i] = 3;
			grid[0][i] = 4;
		}
		i++;
	}
}
