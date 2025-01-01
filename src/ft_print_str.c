/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:58:16 by facosta           #+#    #+#             */
/*   Updated: 2025/01/01 22:22:29 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = -1;
	while (str[++len])
		ft_putchar_fd(str[len], 1);
	return (len);
}
