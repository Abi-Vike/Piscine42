/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:38:16 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/03 23:14:47 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter ++;
    }
}
