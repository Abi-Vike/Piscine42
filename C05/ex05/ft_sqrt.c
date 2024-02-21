/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 06:59:03 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/21 18:38:59 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;
	
	i = 1;
	if (nb >=1)
	{
		while (i <= 46340)
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

#include <stdio.h>
#include <limits.h>
int main(void)
{
	printf("%d\n", ft_sqrt(INT_MIN));
	printf("%d\n", ft_sqrt(-16));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(13));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(INT_MAX));	
}
