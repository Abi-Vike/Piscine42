/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:38:40 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/20 08:11:58 by ayacob           ###   ########.fr       */
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

/*
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%d\n", ft_is_prime(INT_MIN));
	printf("%d\n", ft_is_prime(-3));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(INT_MAX));
}
*/