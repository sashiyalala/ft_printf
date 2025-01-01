/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:56:07 by facosta           #+#    #+#             */
/*   Updated: 2024/12/31 16:36:00 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_u_num_length(unsigned int n);

// Unsigned int -> string
// Allocate memory for a string, the length of the number(+ '\0')
// Fill out the resulting string, dividing by 10, "writing" the string
// Right to Left(<-)
// Don't forget to fill out the left-most digit, outside of the loop
char	*ft_utoa(unsigned int n)
{
	size_t	n_length;
	char	*n_str;

	n_length = ft_u_num_length(n);
	n_str = ft_calloc(n_length + 1, sizeof(char));
	if (!n_str)
		return (0);
	n_length--;
	while (n_length)
	{
		n_str[n_length] = (n % 10) + '0';
		n /= 10;
		n_length--;
	}
	n_str[0] = (n % 10) + '0';
}

static size_t	ft_u_num_length(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		len++;
		n /= 10;
	}
	return (len);
}
