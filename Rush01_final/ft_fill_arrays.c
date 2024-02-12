/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arrays.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:01:42 by eduribei          #+#    #+#             */
/*   Updated: 2024/02/11 20:30:48 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

void	ft_fill_arrays(char *input, int *colc, int *rowc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		colc[j] = input[i] - '0';
		i = i + 2;
		j++;
	}
	j = 0;
	while (i < 32)
	{
		rowc[j] = input[i] - '0'; 
		i = i + 2;
		j++;
	}
}
