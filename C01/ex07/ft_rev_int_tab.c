/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:32:31 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/07 14:46:25 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_rev_int_tab(int *tab, int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
}
