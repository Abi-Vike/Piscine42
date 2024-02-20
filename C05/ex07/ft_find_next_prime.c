/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:13:06 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/20 08:57:35 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb > 1)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

int ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return(0);
}

/*
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%d\n", ft_find_next_prime(INT_MIN));
	printf("%d\n", ft_find_next_prime(-3));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(INT_MAX));
}
*/