/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:38:50 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/04 00:02:20 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
    char i = '0';
    char j = '0';
    char k = '0';

    while(i <= '9')
    {
        while(j <= '9')
        {
            while(k <= '9')
            {
                if (i!=j && i!=k && j!=k)
                {
                    write(1, &i, 1);
                    write(1, &j, 1);
                    write(1, &k, 1);
                } 
                                
                //if (i != '7' || j != '8' || k != '9') {
                write(1, ", ", 2);  // Print comma and space unless it's the last combination
                //}
                k++;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_comb();
}