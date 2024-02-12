/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:54:38 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/09 10:02:02 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void ft_putnbr(int nb);
int main()
{
    int nbr = -2147483647;
    ft_putnbr(nbr);
    write(1, "\n", 1);
}
*/
void ft_putnbr(int nb)
{
    int i = 0;
    int arr[20];
     
    // Handle zero separately
    if (nb == 0)
    {
        write(1, "0", 1);
        return;
    }

    // Handle negative numbers
    if (nb < 0)
    {
        write(1, "-", 1);
        if (nb == -2147483648)
        {
            write(1, "2147483648", 10);
            return;
        }
        nb = -nb; // Make nb positive for further processing
    }

    while (nb != 0)
    {
        int rem = nb % 10; 
        nb = (nb - rem)/10;
        arr[i] = rem;
        i++;
    }

    while (i > 0)
    {
        char dig_ch = arr[i-1] + '0';
        write(1, &dig_ch, 1);
        i--;
    }
}