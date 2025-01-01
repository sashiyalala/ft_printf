/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 22:37:23 by facosta           #+#    #+#             */
/*   Updated: 2025/01/02 00:26:35 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// va_start, va_arg, va_copy, va_end
# include <stdarg.h>
# include "libft.h"

// Typedef struct for creating any base to print numbers on
typedef struct s_base
{
	char			*digits;
	unsigned int	base_size;
}	t_base;

// Typedef to indicate we want to use the biggest possible int possible for
// shared logic to print both numbers & pointers in hexadecimal bases
// Why ulonglong? Re. C99 std, the size of ulonglong >= 64 bits.
// Nowadays, pointer sizes are ensured to be, at most, 64 bits.
typedef unsigned long long	t_max_length_uint;

int	ft_printf(char const *ct_f_str, ...);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_dec(int n);
int	ft_print_unsigned_dec(unsigned int n);
int	ft_print_hexadec(t_max_length_uint n, int is_uppercase);
int	ft_print_pointer(void *p);

// Shared method for printing data as numbers in various bases
int	ft_print_digits(unsigned long long n, t_base *base);

#endif
