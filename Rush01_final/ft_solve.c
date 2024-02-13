/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroux <aroux@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:22:12 by aroux             #+#    #+#             */
/*   Updated: 2024/02/11 21:22:20 by aroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

int	ft_solve(int grid[4][4], int row, int col)
{
	int	num;

	num = 1;
	if (row == 4) 
		return (1);
	if (col == 4)
		return (ft_solve(grid, row + 1, 0));
	if (grid[row][col] != -1)
		return (ft_solve(grid, row, col + 1));
	while (num <= 4)
	{
		if (ft_is_valid(grid, row, col, num)) 
		{
			grid[row][col] = num;
			if (ft_solve(grid, row, col + 1))
				return (1);
			grid[row][col] = -1;
		}
		num++;
	}
	return (0);
}
