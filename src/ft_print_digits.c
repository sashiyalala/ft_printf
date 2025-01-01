/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 23:10:02 by facosta           #+#    #+#             */
/*   Updated: 2025/01/02 00:06:44 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_print_length(unsigned long long n, unsigned int base);
static void		ft_put_digits(unsigned long long n, t_base *base);

// Print any given data as an unsigned number in a base of custom length &
// digits passed as argument
int	ft_print_digits(unsigned long long n, t_base *base)
{
	ft_put_digits(n, base);
	return (ft_print_length(n, base->base_size));
}

static void	ft_put_digits(unsigned long long n, t_base *base)
{
	unsigned int	base_length;

	base_length = base->base_size;
	if (n >= base_length)
	{
		ft_put_digits(n / base_length, base);
		ft_put_digits(n % base_length, base);
		return ;
	}
	ft_print_char(base->digits[n]);
}

static size_t	ft_print_length(unsigned long long n, unsigned int base_size)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		len++;
		n /= base_size;
	}
	return (len);
}
