/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 16:38:51 by facosta           #+#    #+#             */
/*   Updated: 2025/01/01 22:06:57 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_x_num_length(unsigned long long n);
static void		ft_put_hexadec(unsigned long long n, int is_uppercase);

int	ft_print_hexadec(unsigned long long n, int is_uppercase)
{
	ft_put_hexadec(n, is_uppercase);
	return (ft_x_num_length(n));
}

static void	ft_put_hexadec(unsigned long long n, int is_uppercase)
{
	char		digit;
	const char	*hexadec_base;

	hexadec_base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_print_hexadec(n / 16, is_uppercase);
		ft_print_hexadec(n % 16, is_uppercase);
		return ;
	}
	digit = hexadec_base[n];
	if (is_uppercase)
		digit = ft_toupper(digit);
	ft_print_char(digit);
}

static size_t	ft_x_num_length(unsigned long long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		len++;
		n /= 16;
	}
	return (len);
}
