/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 16:38:51 by facosta           #+#    #+#             */
/*   Updated: 2025/01/02 00:19:36 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadec(t_max_length_uint n, int is_uppercase)
{
	t_base	unsigned_dec_base;

	unsigned_dec_base.base_size = 16;
	if (!is_uppercase)
		unsigned_dec_base.digits = "0123456789abcdef";
	else
		unsigned_dec_base.digits = "0123456789ABCDEF";
	return (ft_print_digits(n, &unsigned_dec_base));
}
