/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:35:34 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/16 09:51:59 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

char *ft_strrev(char *str)
{
	int i;
	int len;
	char temp;

	i = 0;
	len = ft_strlen(str);

	while (i < len)
	{
		temp = str[i];
		str[i] = str[len-1];
		str[len-1] = temp;
		i++;
		len--;
	}

	return (str);
}

#include <stdio.h>
int main()
{
	char string[6] = "Tommy";
	printf("reversed: %s\n", ft_strrev(string));
}