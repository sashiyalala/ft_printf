/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_dec.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:48:35 by facosta           #+#    #+#             */
/*   Updated: 2025/01/01 23:40:52 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_dec(unsigned int n)
{
	t_base	unsigned_dec_base;

	unsigned_dec_base.base_size = 10;
	unsigned_dec_base.digits = "0123456789";
	return (ft_print_digits(n, &unsigned_dec_base));
}
