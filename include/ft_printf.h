/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 22:37:23 by facosta           #+#    #+#             */
/*   Updated: 2025/01/01 22:36:15 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// va_start, va_arg, va_copy, va_end
# include <stdarg.h>
// malloc, free, write
# include <unistd.h>
# include "../libft/libft.h"

// typedef unsigned long long	longest_int;

int	ft_printf(char const *ct_f_str, ...);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_dec(int n);
int	ft_print_unsigned_dec(unsigned int n);
int	ft_print_hexadec(unsigned long long n, int is_uppercase);
int	ft_print_pointer(void *p);

#endif
