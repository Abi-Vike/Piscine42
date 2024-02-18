/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:18:29 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/18 22:18:50 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
	}

    if (nb >= 10)
        ft_putnbr(nb / 10);

    ft_putchar(nb % 10 + '0');
}

/*
int main()
{
    ft_putnbr(42);
    return (0);
}
*/