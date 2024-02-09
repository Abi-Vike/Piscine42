/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:06:00 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/09 07:56:37 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
/*
int main()
{
    char string[] = "Hello, World!";

    ft_putstr(string);
}
*/
void ft_putstr(char *str)
{
    while(*str != '\0')
    {
        write(1, str, 1);
        str ++;
    }
}

