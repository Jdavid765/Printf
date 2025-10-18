/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:18:59 by david             #+#    #+#             */
/*   Updated: 2025/10/18 22:11:36 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_dec(unsigned int n)
{
	char	tmp;

	if (n > 9)
	{
		ft_printf_dec(n / 10);
		ft_printf_dec(n % 10);
	}
	if (n >= 0 && n <= 9)
	{
		tmp = n + '0';
		write(1, &tmp, 1);
	}
	return(1);
}

/*int	main(void)
{
	unsigned int u = 429496724;
	printf("%u",u);
}*/