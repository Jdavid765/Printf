/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:58:49 by yourlogin         #+#    #+#             */
/*   Updated: 2025/10/18 21:10:36 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_selectf(char tmp, va_list current)
{
	int	count;

	count = 0;
	if (tmp == 's')
		count += ft_printf_str(va_arg(current, char *));
	else if (tmp == 'c')
		count += ft_printf_char(va_arg(current, int));
	else if (tmp == 'd')
		count += ft_printf_nbr(va_arg(current, int));
	else if (tmp == 'u')
		count += ft_printf_dec(va_arg(current, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
    va_list	current;
	int	count;

	count = 0;
	va_start	(current, format);
	while(*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_selectf(*format, current);	
		}
		format++;
	}
	va_end(current);

    return (count);
}

int main() {
	//int d = 2332;
    //const char s[] = "bonjour paul";
	//const char c = 'A';
	unsigned int u = -4294;
	ft_printf("Résultat = %u", u);
	printf("%u",u);
    return 0;
}
