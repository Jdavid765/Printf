/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:58:42 by david             #+#    #+#             */
/*   Updated: 2025/10/19 22:11:52 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *content)
{
	int	count;

	count = 0;
	ft_printf_str("0x");
	ft_printf_hexa((unsigned int )content, 'x', &count);
	return (count);
}

#include <stdio.h>
int	main(void)
{
	int a = 4;
	printf("%p\n", (void *)&a);
	ft_printf_ptr((void *)&a);
}