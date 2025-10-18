/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:55:37 by yourlogin         #+#    #+#             */
/*   Updated: 2025/10/18 15:22:23 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf_char(char c);
int	ft_printf_str(char *str);

#endif