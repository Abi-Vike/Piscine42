/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:30:16 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/09 07:55:23 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);
int main()
{
    int num1 = 10;
    int num2 = 3;
    int container1;
    int container2;

    ft_div_mod(num1, num2, &container1, &container2);

    //or you can print the result here
    printf("div: %d\n", container1);
    printf("mod: %d\n", container2);

    return 0;
}
*/

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
    
    /*
    //or you can print the result here
    printf("div: %d\n", *div);
    printf("mod: %d\n", *mod);
    */
}
