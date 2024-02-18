/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:57:35 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/18 17:18:08 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

/*
#include <unistd.h>
int main()
{
	char name[6] = "Abiel";
	int result = ft_strlen(name);

	char len = result + '0';
	write(1, &len, 1);
	write(1, "\n", 1);
	return (0); 
}
*/