/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcases.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluegham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:36:20 by tluegham          #+#    #+#             */
/*   Updated: 2024/05/07 09:25:45 by tluegham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stddef.h>

int	main(void)
{
	//
	// Int checks:
	ft_printf("\n\tInt checks:\n\n");
	//
	printf("|len is: %d|\n", ft_printf("test hello: %d now %d %dafter\n", 1234, 12, 785609));
	printf("|len is: %d|\n", printf("test hello: %d now %d %dafter\n", 1234, 12, 785609));
	printf("|len is: %d|\n", ft_printf("test hello: %i now after\n", -2147483648));
	printf("|len is: %d|\n", printf("test hello: %li now after\n", -2147483648));
	printf("|len is: %d|\n", ft_printf("test hello: %i now after\n", 2147483647));
	printf("|len is: %d|\n", printf("test hello: %i now after\n", 2147483647));
	printf("|len is: %d|\n", ft_printf("test hello: %d now after\n", -2));
	printf("|len is: %d|\n", printf("test hello: %d now after\n", -2));
	//
	// Char checks:
	ft_printf("\n\tChar checks:\n\n");
	//
	printf("|len is: %d|\n", ft_printf("test hello: %c now after\n", 'd'));
	printf("|len is: %d|\n", printf("test hello: %c now after\n", 'd'));
	printf("|len is: %d|\n", ft_printf("test hello: %c now after\n", 128));
	printf("|len is: %d|\n", printf("test hello: %c now after\n", 128));
	printf("|len is: %d|\n", ft_printf("test hello: %c now after\n", 0));
	printf("|len is: %d|\n", printf("test hello: %c now after\n", 0));
	//
	// Hexadedimal checks:	
	ft_printf("\n\tHexadecimal checks:\n\n");
	//
	printf("|len is: %d|\n", ft_printf("test hello: %x now after\n", 58908));
	printf("|len is: %d|\n", printf("test hello: %x now after\n", 58908));
	printf("|len is: %d|\n", ft_printf("test hello: %x now after\n", 1));
	printf("|len is: %d|\n", printf("test hello: %x now after\n", 1));
	printf("|len is: %d|\n", ft_printf("test hello: %x now after\n", -200));
	printf("|len is: %d|\n", printf("test hello: %x now after\n", -200));
	printf("|len is: %d|\n", ft_printf("test hello: %x now after\n", 4294967296));
	printf("|len is: %d|\n", printf("test hello: %x now after\n", (unsigned int) 4294967296));
	// Big Hexadecimal
	printf("|len is: %d|\n", ft_printf("test hello: %X now after\n", 58908));
	printf("|len is: %d|\n", printf("test hello: %X now after\n", 58908));
	printf("|len is: %d|\n", ft_printf("test hello: %X now after\n", 1));
	printf("|len is: %d|\n", printf("test hello: %X now after\n", 1));
	printf("|len is: %d|\n", ft_printf("test hello: %X now after\n", -200));
	printf("|len is: %d|\n", printf("test hello: %X now after\n", -200));
	printf("|len is: %d|\n", ft_printf("test hello: %X now after\n", 4294967296));
	printf("|len is: %d|\n", printf("test hello: %X now after\n", (unsigned int) 4294967296));
	//
	// Pointer checks:
	ft_printf("\n\tPointer checks:\n\n");
	//
	int	i = 12;
	char *test = "testString";
	printf("|len is: %d|\n", ft_printf("mem: test hello: %p %p now %p after\n", &i, test, &test));
	printf("|len is: %d|\n", printf("mem: test hello: %p %p now %p after\n", &i, test, &test));
	printf("|len is: %d|\n", ft_printf("mem: test hello: %p %p now %p after\n", &test[0], &test[1], &test[2]));
	printf("|len is: %d|\n", printf("mem: test hello: %p %p now %p after\n", &test[0], &test[1], &test[2]));
	printf("|len is: %d|\n", ft_printf("test hello: %p now after\n", NULL));
	printf("|len is: %d|\n", printf("test hello: %p now after\n", NULL));
	//
	// Unsigned Int checks:
	ft_printf("\n\tUint checks:\n\n");
	//
	printf("|len is: %d|\n", ft_printf("test hello: %u now after\n", 58908));
	printf("|len is: %d|\n", printf("test hello: %u now after\n", 58908));
	printf("|len is: %d|\n", ft_printf("test hello: %u now after\n", 1));
	printf("|len is: %d|\n", printf("test hello: %u now after\n", 1));
	printf("|len is: %d|\n", ft_printf("test hello: %u now after\n", -200));
	printf("|len is: %d|\n", printf("test hello: %u now after\n", -200));
	printf("|len is: %d|\n", ft_printf("test hello: %u now after\n", 4294967296));
	printf("|len is: %d|\n", printf("test hello: %u now after\n",(unsigned int) 4294967296));
	//
	// String checks:
	ft_printf("\n\tString checks:\n\n");
	//
	char *s1 = "first string";
	char *s2 = "seccond string";
	char *s3 = "Final str\0ing here";

	printf("|len is: %d|\n", ft_printf("mem: test hello: |%s| |%s| now |%s| after\n", s1, s2, s3));
	printf("|len is: %d|\n", printf("mem: test hello: |%s| |%s| now |%s| after\n", s1, s2, s3));
	printf("|len is: %d|\n", ft_printf("mem: test hello: |%s| |%s| now |%s| after\n", &s1[2], &s2[2], &s3[2]));
	printf("|len is: %d|\n", printf("mem: test hello: |%s| |%s| now |%s| after\n", &s1[2], &s2[2], &s3[2]));
	printf("|len is: %d|\n", ft_printf("test hello: %s now after\n", (char *) NULL));
	printf("|len is: %d|\n", printf("test hello: %s now after\n", (char *) NULL));
	printf("|len is: %d|\n", ft_printf("test hello: %s now after\n", "\0"));
	printf("|len is: %d|\n", printf("test hello: %s now after\n", "\0"));
	//
	// Random checks:
	ft_printf("\n\tRandom checks:\n\n");
	//
	printf("|len is: %d|\n", ft_printf("mem: test hello: |%s| |%i| now |%X| after\n", "stringggggggggggg", -1234, 8989438));
	printf("|len is: %d|\n", printf("mem: test hello: |%s| |%i| now |%X| after\n", "stringggggggggggg", -1234, 8989438));
	printf("|len is: %d|\n", ft_printf("mem: test hello: |%c| |%u| now |%X| after\n", '>', 334328953, 90));
	printf("|len is: %d|\n", printf("mem: test hello: |%c| |%u| now |%X| after\n", '>', 334328953, 90));
	//
	// Input string checks:
	ft_printf("\n\tNULL input check for string\n");
	//
	printf("|len is: %d|\n", ft_printf(NULL));
	printf("|len is: %d|\n", printf(NULL));

	/* string with '\0' does not compile with original printf
	 *
	ft_printf("\n\tNull terminator before args in string\n");
	printf("|len is: %d|\n", ft_printf("Null now\0 %s", "does it show?"));
	printf("|len is: %d|\n", printf("Null now\0 %s", "does it show?"));
	*/

	return (0);
}
