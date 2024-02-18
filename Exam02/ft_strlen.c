/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 07:50:47 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/16 08:27:57 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strnlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <unistd.h>

int main(void)
{
	char str[6] = "Tommy";
	char len;
	
	len = ft_strnlen(str) + '0';

	write(1, &len, sizeof(len));
	write(1, "\n", 1);
	return (0);
}
*/
