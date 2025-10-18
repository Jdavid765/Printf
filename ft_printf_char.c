/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:56:43 by yourlogin         #+#    #+#             */
/*   Updated: 2025/10/18 15:21:30 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

/*int	main(void)
{
	char c = 'A';
	printf("%d", ft_printf_char(c));
}*/