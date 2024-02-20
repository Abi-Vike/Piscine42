/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:13:22 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/19 17:24:48 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	result = 1;
	i = 0;

	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (0);
	else 
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", power(2, 3));
}
*/