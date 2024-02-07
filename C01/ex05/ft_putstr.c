/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:06:00 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/07 00:54:02 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str != '\0')
    {
        write(1, str, 1);
        str ++;
    }
}

/*
int main()
{
    char *message = "Hello, World!";
    ft_putstr(message);
    return 0;
} 
*/