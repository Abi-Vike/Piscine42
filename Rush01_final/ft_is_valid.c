/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroux <aroux@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:20:12 by aroux             #+#    #+#             */
/*   Updated: 2024/02/11 21:20:21 by aroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

int	ft_is_valid(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num) 
			return (0);
		i++;
	}
	return (1);
}
