/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:49:14 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/14 12:14:03 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int len;

	len = 0;
	while (*dest)
	{
		len++;
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		len++;
	}

	*dest = '\0';

	return dest;
}

/*
int main()
{
	char source[] = "Abi";
	char destination[] = "Tom";

	ft_strcat(destination, source);
	printf("Result = %s\n", destination);
	return(0);
}
*/
