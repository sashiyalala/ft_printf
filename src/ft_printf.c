/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 22:37:42 by facosta           #+#    #+#             */
/*   Updated: 2025/01/18 13:07:29 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_interpolate_str(char f_type, va_list args)
{
	if (f_type == '%')
		return (ft_print_char('%'));
	if (f_type == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (f_type == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (f_type == 'd' || f_type == 'i')
		return (ft_print_dec(va_arg(args, int)));
	if (f_type == 'u')
		return (ft_print_unsigned_dec(va_arg(args, unsigned int)));
	if (f_type == 'x' || f_type == 'X')
		return (ft_print_hexadec(va_arg(args, unsigned int), 'x' - f_type));
	if (f_type == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	return (0);
}

static int	ft_parse_f_str(const char *f_str, va_list args)
{
	int	idx;
	int	print_length;

	idx = -1;
	print_length = 0;
	while (f_str[++idx])
	{
		if (f_str[idx] == '%' && f_str[idx + 1] != '\0')
		{
			idx++;
			print_length += ft_interpolate_str(f_str[idx], args);
		}
		else
			print_length += ft_print_char(f_str[idx]);
	}
	return (print_length);
}

int	ft_printf(char const *ct_f_str, ...)
{
	va_list	args;
	int		print_length;

	print_length = 0;
	if (!ct_f_str)
		return (-1);
	if (*ct_f_str == '\0')
		return (print_length);
	va_start(args, ct_f_str);
	print_length = ft_parse_f_str(ct_f_str, args);
	va_end(args);
	return (print_length);
}

// #include <stdio.h>
// #include "../include/ft_printf.h"

// int	main(void)
// {
// 	{
// 		// TEST empty string
// 		int yo = ft_printf("");
// 		printf("\n");
// 		int og = printf("");
// 	}

// 	{
// 		// TEST NULL PTR as format string
// 		int yo = ft_printf(NULL);
// 		printf("\n");
// 		int og = printf(NULL);
// 	}

// 	{
// 		// TEST char(s)
// 		int yo = ft_printf("hola mund%c!%c\n", 'u', 'n', 'o');
// 		printf("\n");
// 		int og = printf("hola mund%c!%c\n", 'u', 'n', 'o');
// 		// printf("yo: %d // og: %d", yo, og);
// 	}

// 	{
// 		// TEST string
// 		int yo = ft_printf("hola mu%s4", "nd0\n");
// 		printf("\n");
// 		int og = printf("hola mu%s5", "nd0\n");
// 		// printf("yo: %d // og: %d", yo, og);
// 	}

// 	{
// 		// TEST null string
// 		char *patata = NULL;
// 		char valid[11] = "hola mu%s!";
// 		int yo = ft_printf(valid, patata);
// 		printf("\n");
// 		int og = printf(valid, patata);
// 		printf("yo: %d // og: %d", 0, og);
// 	}

// 	{
// 		// TEST decimal numbers w/ d
// 		int yo = ft_printf("come tarta: 3.%d", 1415926);
// 		printf("\n");
// 		int og = printf("come tarta: 3.%d", 1415926);
// 		printf("yo: %d // og: %d", yo, og);
// 	}

// 	{
// 		// TEST decimal numbers w/ i
// 		int yo = ft_printf("come tarta: 3.%i", -1415926);
// 		printf("\n");
// 		int og = printf("come tarta: 3.%i", -1415926);
// 		printf("yo: %d // og: %d", yo, og);
// 	}

// 	{
// 		// TEST unsigned number
// 		unsigned int unum = 12303;
// 		int yo = ft_printf("sin signo!: %u", unum);
// 		printf("\n");
// 		int og = printf("sin signo!: %u", unum);
// 		printf("yo: %d // og: %d", yo, og);
// 	}

// 	{
// 		// TEST unsigned number in hexdec
// 		unsigned int unum = 12303;
// 		int yo = ft_printf("sin signo!: %X", unum);
// 		printf("\n");
// 		int og = printf("sin signo!: %X", unum);
// 		printf("yo: %d // og: %d", yo, og);
// 	}

// 	{
// 		// TEST unsigned number in hexdec
// 		unsigned long long unum = (unsigned long long) 18446744073709551620;
// 		int yo = ft_printf("sin signo!: %u", unum);
// 		printf("\n");
// 		int og = printf("sin signo!: %u", unum);
// 		printf("yo: %d // og: %d", yo, og);
// 	}

// 	{
// 		// TEST unsigned number in hexdec
// 		int yo = ft_printf("sin signo!: %p", 0);
// 		printf("\n");
// 		int og = ft_printf("sin signo!: %p", 0);
// 		printf("yo: %d // og: %d", yo, og);
// 	}
// 	return (0);
// }