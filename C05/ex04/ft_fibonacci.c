/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:28:10 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/20 06:58:04 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	int fib = 0;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	index--;
	return (fib);
}

/*
#include <stdio.h>
int main()
{
	int nb = 9;
	printf("%d\n", ft_fibonacci(nb));
	return (0);
}
*/