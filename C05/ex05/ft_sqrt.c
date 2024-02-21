/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 06:59:03 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/21 08:35:35 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;
	
	i = 1;
	if (nb >=1)
	{
		while ((i * i) <= nb)
		{
			if (i * i == nb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	int num = -16;
	int num1 = 0;
	int num2 = 1;
	int num3 = 13;
	int num4 = 16;

	printf("%d\n", ft_sqrt(num));
	printf("%d\n", ft_sqrt(num1));
	printf("%d\n", ft_sqrt(num2));
	printf("%d\n", ft_sqrt(num3));
	printf("%d\n", ft_sqrt(num4));	
}
*/