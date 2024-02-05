/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:27:36 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/03 23:37:14 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_is_negative(int n) {
    if (n < 0) {
        ft_putchar('N');
    } else {
        ft_putchar('P');
    }
}

/* OR ALTERNATIVELY

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_is_negative(int n) {
    if (n < 0) {
        ft_putchar('N');
    } else {
        ft_putchar('P');
    }
}
*/