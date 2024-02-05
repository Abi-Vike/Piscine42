/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:20:10 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/03 23:20:12 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char alpha = 'z';
    while (alpha >= 'a')
    {
        write(1, &alpha, 1);
        alpha --;
    }
}