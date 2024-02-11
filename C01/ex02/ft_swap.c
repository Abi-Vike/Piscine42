/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:45:35 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/08 15:49:32 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
void ft_swap(int *a, int *b);
int main()
{
    int x = 10, y = 20;

    printf("X's and Y's adresses: %p, %p\n", &x, &y);
    printf("X and Y before the swap: %d, %d\n", x, y);

    ft_swap(&x, &y);

    printf("X and Y after the swap: %d, %d\n", x, y);
    return 0;
}
*/

void ft_swap(int *a, int *b)
{
    int temp = *a;  
    *a = *b;   
    *b = temp;
}
