/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:23:28 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/19 16:35:59 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

int is_digit(char c)
{
	return (c >= '0' && c<= '9');
}

int ft_atoi(char *str) 
{
	int	sign;
	int result;
	int count_minus;
	
	sign = 1;
	result = 0;
	count_minus = 0;
	
	while (is_space(*str))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count_minus++;
		str++;
	}
	if (count_minus % 2 != 0)
	{
		sign = -1;
	}
	while (is_digit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return sign * result;
}
