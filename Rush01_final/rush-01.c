/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:05:10 by eduribei          #+#    #+#             */
/*   Updated: 2024/02/11 20:33:43 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

int	main(int argc, char *argv[])
{
	int	size;
	int	c_const[8];
	int	r_const[8];
	int	grid[4][4];

	size = 4;
	if (ft_check_input(argc, argv[1], size) != 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_fill_arrays(argv[1], c_const, r_const);
	ft_initialize_grid(grid);
	ft_solve_with_constr(r_const, c_const, grid);
	return (0);
}
