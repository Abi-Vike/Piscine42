/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:17:21 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/15 11:54:40 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i=0;
	while(s1[i] == s2[i] && (s1[i] != '\0' || s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
//#include <stdio.h>

int main()
{
	printf("%d\n", ft_strcmp("Tommy", "Tom"));
	printf("%d\n", ft_strcmp("Hi", "He"));
	printf("%d\n", ft_strcmp("He", "Hello"));
}
*/
