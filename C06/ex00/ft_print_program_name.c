/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:23:26 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/21 07:13:48 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 0)
		while (argv[0][i])
		{
			write(1, &argv[0][i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}