/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:09:10 by yourlogin         #+#    #+#             */
/*   Updated: 2025/10/18 14:45:30 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_printf_str(char *str)
{
	ft_putstr_fd(str, 1);
	return (1);
}

/*int	main(void)
{
	char str[] = "bonjour l ecole 42";
	printf("%d", ft_printf_str(str));
}*/