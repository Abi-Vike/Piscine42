/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:47:13 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/09 07:56:15 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);
int main()
{
    int num1 = 10, num2 = 3;
    
    ft_ultimate_div_mod(&num1, &num2);
    
    // you could print from here
    printf("a or modified num1: %d\n", num1);
    printf("b or modified num2: %d\n", num2);
    
}
*/
void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;
    *a = temp / *b;
    *b = temp % *b;

    /*
    printf("a: %d\n", *a);
    printf("b: %d\n", *b);
    */
}
