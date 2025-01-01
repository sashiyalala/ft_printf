// DELETEME

#include <stdio.h>
#include "../include/ft_printf.h"

int	main(void)
{
	{
		// TEST empty string
		int yo = ft_printf("");
		printf("\n");
		int og = printf("");
	}

	{
		// TEST NULL PTR as format string
		int yo = ft_printf(NULL);
		printf("\n");
		int og = printf(NULL);
	}

	{
		// TEST char(s)
		int yo = ft_printf("hola mund%c!%c\n", 'u', 'n', 'o');
		printf("\n");
		int og = printf("hola mund%c!%c\n", 'u', 'n', 'o');
		// printf("yo: %d // og: %d", yo, og);
	}

	{
		// TEST string
		int yo = ft_printf("hola mu%s4", "nd0\n");
		printf("\n");
		int og = printf("hola mu%s5", "nd0\n");
		// printf("yo: %d // og: %d", yo, og);
	}

	{
		// TEST null string
		char *patata = NULL;
		char valid[11] = "hola mu%s!";
		int yo = ft_printf(valid, patata);
		printf("\n");
		int og = printf(valid, patata);
		printf("yo: %d // og: %d", 0, og);
	}

	{
		// TEST decimal numbers w/ d
		int yo = ft_printf("come tarta: 3.%d", 1415926);
		printf("\n");
		int og = printf("come tarta: 3.%d", 1415926);
		printf("yo: %d // og: %d", yo, og);
	}

	{
		// TEST decimal numbers w/ i
		int yo = ft_printf("come tarta: 3.%i", -1415926);
		printf("\n");
		int og = printf("come tarta: 3.%i", -1415926);
		printf("yo: %d // og: %d", yo, og);
	}

	{
		// TEST unsigned number
		unsigned int unum = 12303;
		int yo = ft_printf("sin signo!: %u", unum);
		printf("\n");
		int og = printf("sin signo!: %u", unum);
		printf("yo: %d // og: %d", yo, og);
	}

	{
		// TEST unsigned number in hexdec
		unsigned int unum = 12303;
		int yo = ft_printf("sin signo!: %X", unum);
		printf("\n");
		int og = printf("sin signo!: %X", unum);
		printf("yo: %d // og: %d", yo, og);
	}

	{
		// TEST unsigned number in hexdec
		unsigned long long unum = (unsigned long long) 18446744073709551620;
		int yo = ft_printf("sin signo!: %u", unum);
		printf("\n");
		int og = printf("sin signo!: %u", unum);
		printf("yo: %d // og: %d", yo, og);
	}

	{
		// TEST unsigned number in hexdec
		int yo = ft_printf("sin signo!: %p", 0);
		printf("\n");
		int og = ft_printf("sin signo!: %p", 0);
		printf("yo: %d // og: %d", yo, og);
	}
	return (0);
}