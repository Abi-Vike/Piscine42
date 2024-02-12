/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:03:42 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/12 22:04:26 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char string[]="";

	int result = ft_str_is_alpha(string);

	printf("%d\n", result);
}
*/
