/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:56:24 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/21 17:34:08 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	int r;

	r = 0;
	while (s1[r] != '\0' || s2[r] != '\0')
	{
		if (s1[r] < s2[r])
			return -1;
		else if (s1[r] > s2[r])
			return 1;
		r++;
	}
	return (0);
}

void ft_swap(char **a, char **b)
{
	char *tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(int ac, char **av)
{
	int i;
	//char *tmp;

	i = 1;
	while (i < ac - 1)
	{
		int swapped = 0;
		int j = 1;

		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				ft_swap(&av[j], &av[j + 1]);
				/*
				tmp = av[j];
				av[j] = av[j+1];
				av[j+1] = tmp;
				*/
				
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break;
		i++;
	}
	int k = 1;
	while (k < ac)
	{
		ft_putstr(av[k]);
		write(1, "\n", 1);
		k++;
	}
	return (0);
}