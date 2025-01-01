/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:48:15 by facosta           #+#    #+#             */
/*   Updated: 2025/01/01 23:50:49 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_dec(int n)
{
	int		print_length;

	print_length = 0;
	if (n < 0)
	{
		print_length += ft_print_char('-');
		n *= -1;
	}
	print_length += ft_print_unsigned_dec(n);
	return (print_length);
}
