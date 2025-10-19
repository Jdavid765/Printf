/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:58:42 by david             #+#    #+#             */
/*   Updated: 2025/10/19 21:02:26 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *content)
{
	
}

#include <stdio.h>
int	main(void)
{
	int a = 4;
	printf("%p", &a);
	ft_printf_ptr(&a);
}