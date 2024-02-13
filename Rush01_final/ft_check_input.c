/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:01:06 by eduribei          #+#    #+#             */
/*   Updated: 2024/02/11 20:38:43 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

int	ft_check_input(int a, char *str, int size)
{
	int	i;

	i = 0;
	if (a != 2)
	{
		return (1);
	}
	if (ft_strlen(str) != ((size * size * 2) - 1))
	{
		return (2);
	}
	while (i < ((size * size * 2) - 2))
	{
		if (((ft_is_digit(str[i], size) == 0) || (str[i + 1] != ' ')))
		{
			return (3);
		}
		i = i + 2;
	}
	if (!(ft_is_digit(str[(size * size * 2) - 2], size)))
	{
		return (4);
	}
	return (0);
}
/*
int		main(int argc, char *argv[])
{
	int size;
	size = 4;

	char *test = "1 0 0 0 2 0 0 0 3 0 0 0 4 0 0 0";
	printf("%d\n", ft_check_input(1, test, size));
} */
