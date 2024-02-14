/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:14:18 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/14 08:02:25 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (src[len] && len < size - 1)
	{
		len++;
	}
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[len] = '\0';
	}
	return (len);
}

/*
int main() {
	char src[] = "Hello, World!";
	char dest[20];

	unsigned int length = ft_strlcpy(dest, src, sizeof(dest));

	printf("Copied string: %s\n", dest);
	printf("Length of copied string: %u\n", length); /

	return 0;
}
*/
