/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:48:15 by facosta           #+#    #+#             */
/*   Updated: 2024/12/30 20:59:49 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_dec(int n)
{
	int		number_length;
	char	*number_str;

	number_length = 0;
	number_str = ft_itoa(n);
	number_length = ft_print_str(number_str);
	free(number_str);
	return (number_length);
}
