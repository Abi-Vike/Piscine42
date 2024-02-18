/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:53:11 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/16 10:18:01 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rot13(char *str)
{
	int i;

		i = 0;
		while(str[i] != '\0')
		{
			if ((str[i] >= 'a') && (str[i] <= 'm') || (str[i] >= 'A') && (str[i] <= 'M'))
				str[i] = str[i] + 13;
			else if (str[i] >= 'n' && str[i] <= 'z' || str[i] >= 'N' && str[i] <= 'Z')
				str[i] = str[i] - 13;
			write(1, &str[i], 1);
			i++;
		}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		rot13(av[1]);
	}
	write (1, '\n', 1);
}