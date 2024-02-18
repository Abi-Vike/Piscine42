/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:32:44 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/16 09:14:28 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_rev_print(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    int start = 0;
    int end = len - 1;
    
    // Swap characters from start and end positions until they meet in the middle
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    return str;
}


#include <stdio.h>
int main()
{
	char string[6] = "Tommy";

	ft_rev_print(string);
	printf("%s\n", string);
	return (0);
}