/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:17:54 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/15 12:22:19 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0')
		{
			if (to_find[j] == str[i])
				return (&to_find[j]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_strstr("Hello", "HeLloWorld"));
}

*/
