/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:57:10 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/14 11:23:10 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int sum1;
	int sum2;
	
	sum1 = 0;
	sum2 = 0;
	while (*s1)
	{
		sum1 += *s1;
		s1++;	
	}
	while (*s2)
	{
		sum2 += *s2;
		s2++;
	}

	if (sum1 < sum2)
		return(sum1 - sum2);	
	else if (sum1 > sum2)
		return(sum1 - sum2);	
	else
		return(0);
}


int main()
{
	char str1[] = "A";
	char str2[] = "";
	int res;
	
	res = ft_strcmp(str1, str2);
	printf("Result = %d\n", res);
	return(0);
}

*/

//#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }

    return *s1 - *s2;
}
/*
int main()
{
    char str1[] = "Tom";
    char str2[] = "ToM";
    int res;
    
    res = ft_strcmp(str1, str2);
    printf("Result = %d\n", res);
    return 0;
}
*/

