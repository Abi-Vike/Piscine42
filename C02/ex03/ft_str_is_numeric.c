/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:03:42 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/12 21:58:15 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main()
{
	char string[]="124d";

	int result = ft_str_is_numeric(string);

	printf("%d\n", result);
}
*/
