/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:04:29 by eduribei          #+#    #+#             */
/*   Updated: 2024/02/11 21:21:55 by aroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter])
	{
		ft_putchar(str[counter]);
		counter++;
	}
}
