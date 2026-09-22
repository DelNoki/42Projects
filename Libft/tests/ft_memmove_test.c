/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:55:16 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 16:17:22 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_memmove.c\n");

	{	
		char s1[] = "000111222333444555666";
		char s2[] = "000111222333444555666";

		puts("=== SRC = DST");
		
		puts("=== BEFORE");
		printf("C  SRC: %p | %s\n", &s1, s1);
		printf("C  DST: %p | %s\n", &s1, s1);
		printf("42 SRC: %p | %s\n", &s2, s2);
		printf("42 DST: %p | %s\n", &s2, s2);

		puts("=== AFTER");
		memmove(s1, s1, 3);
		printf("C  SRC: %p | %s\n", &s1, s1);
		printf("C  DST: %p | %s\n", &s1, s1);
		ft_memmove(s2, s2, 3);
		printf("42 SRC: %p | %s\n", &s2, s2);
		printf("42 DST: %p | %s\n", &s2, s2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
	}

	{	
		char s1[] = "000111222333444555666";
		char s2[] = "000111222333444555666";

		puts("=== SRC > DST");
		
		puts("=== BEFORE");
		printf("C  SRC: %p | %s\n", &s1 + 3, s1 + 3);
		printf("C  DST: %p | %s\n", &s1, s1);
		printf("42 SRC: %p | %s\n", &s2 + 3, s2 + 3);
		printf("42 DST: %p | %s\n", &s2, s2);

		puts("=== AFTER");
		memmove(s1, s1 + 3, 3);
		printf("C  SRC: %p | %s\n", &s1 + 3, s1 + 3);
		printf("C  DST: %p | %s\n", &s1, s1);
		ft_memmove(s2, s2 + 3, 3);
		printf("42 SRC: %p | %s\n", &s2 + 3, s2 + 3);
		printf("42 DST: %p | %s\n", &s2, s2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
	}

	{
		char s1[] = "000111222333444555666";
		char s2[] = "000111222333444555666";
		puts("=== SRC < DST");
		
		puts("=== BEFORE");
		printf("C  SRC: %p | %s\n", &s1, s1);
		printf("C  DST: %p | %s\n", &s1 + 3, s1 + 3);
		printf("42 SRC: %p | %s\n", &s2, s2);
		printf("42 DST: %p | %s\n", &s2 + 3, s2 + 3);
		
		puts("=== AFTER");
		memmove(s1 + 3, s1, 3);
		printf("C  SRC: %p | %s\n", &s1, s1);
		printf("C  DST: %p | %s\n", &s1 + 3, s1 + 3);
		ft_memmove(s2 + 3, s2, 3);
		printf("42 SRC: %p | %s\n", &s2, s2);
		printf("42 DST: %p | %s\n", &s2 + 3, s2 + 3);
		printf("=== FINAL CHECK: %s\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
	}

	return (0);
}
