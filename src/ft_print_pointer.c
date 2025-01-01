/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 20:55:23 by facosta           #+#    #+#             */
/*   Updated: 2025/01/01 22:34:53 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *p)
{
	int	print_length;

	if (!p)
		return (ft_print_str("(nil)"));
	print_length = ft_print_str("0x");
	print_length += ft_print_hexadec((unsigned long long) p, 0);
	return (print_length);
}
