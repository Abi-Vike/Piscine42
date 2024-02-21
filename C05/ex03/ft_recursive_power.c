/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:37:14 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/21 18:40:20 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;
	int i;

	result = 1;
	i = 0;

	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (i < power)
	{
		result *= nb * ft_recursive_power(nb, (power-1));
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 3));
	printf("%d\n", ft_recursive_power(3, 0));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(-2, 3));
}
*/