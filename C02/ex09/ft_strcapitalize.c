/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayacob <ayacob@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:03:42 by ayacob            #+#    #+#             */
/*   Updated: 2024/02/14 08:06:29 by ayacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char *ft_strcapitalize(char *str) {
    int capitalize_next = 1; // Flag to indicate whether the next character should be capitalized
    while (*str) {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9')) {
            if (capitalize_next) {
                *str = (*str >= 'a' && *str <= 'z') ? (*str - 'a' + 'A') : *str;
                capitalize_next = 0; // Reset the flag
            } else {
                *str = (*str >= 'A' && *str <= 'Z') ? (*str - 'A' + 'a') : *str;
            }
        } else {
            // Reset the flag if the character is non-alphanumeric
            capitalize_next = 1;
        }
        str++; 
    }
    return str;
}
/*
int main() {
    char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(string);
    printf("%s\n", string); // Output: "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"
    return 0;
}
*/
