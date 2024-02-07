/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:48:33 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/07 16:19:14 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
    int temp, i, j;
    i = 0;
    
    while(i < (size - 1)){
        j = 0;

        while(j < (size - i - 1)){
            if (tab[j] > tab[j + 1]){
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

/*
int main() {
    int numbers[] = {5, 2, 8, 1, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    ft_sort_int_tab(numbers, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
*/
