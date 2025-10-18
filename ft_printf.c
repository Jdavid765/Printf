/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:58:49 by yourlogin         #+#    #+#             */
/*   Updated: 2025/10/18 18:01:24 by david            ###   ########.fr       */
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
	else
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
    va_list	current;
	char	tmp;
	int	count;

	count = 0;
	va_start	(current, format);
	while(*format)
	{
		if (*format == '%')
		{
			format++;
			tmp = *format;
			count += ft_selectf(tmp, current);	
		}	
	}
	va_end(current);

    return (count);
}

int main() {
    const char s[] = "bonjour pauk";
    ft_printf("Résultat = %s\n", s);
    return 0;
}
