/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 07:51:07 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/14 14:56:42 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(*str) / 16]);
			ft_putchar("0123456789abcdef"[(*str) % 16]);
		}
		str++;
	}
}

/*
int main() {
    char string[] = "Coucou\ntu vas bien ?";
    
    ft_putstr_non_printable(string);

    return 0;
}

*/
