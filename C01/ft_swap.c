/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:45:35 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/06 14:25:54 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
    int temp = *a;  
    *a = *b;   
    *b = temp;
}

/*
int main()
{
    int x = 10, y = 20;

    ft_swap(&x, &y);

    printf("X after swapping: %d\n", x);
    printf("Y after swapping: %d\n", y);

    return 0;
}

*/
