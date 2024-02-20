/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:38:55 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/19 11:43:10 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0)
		return (0);

	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

/*
#include <stdio.h>
int main()
{
	int num = 4;
	printf("%d\n", ft_iterative_factorial(num));
}
*/
