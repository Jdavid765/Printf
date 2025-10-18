/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:58:49 by yourlogin         #+#    #+#             */
/*   Updated: 2025/10/18 14:52:15 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	somme(int count, ...)
{
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; ++i) {
        int valeur = va_arg(args, int);
        total += valeur;
    }

    va_end(args);

    return total;
}

int main() {
    int resultat = somme(6, 10, 20, 30, 40, 50, 50); // total = 150
    printf("Résultat = %d\n", resultat);
    return 0;
}
