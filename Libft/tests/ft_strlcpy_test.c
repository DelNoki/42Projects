/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:20:23 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 16:24:16 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_strlcpy.c\n");

	{
		char d1[] = "000000000";
		char d2[] = "000000000";
		char s[] = "";
	
		puts("=== SRC == NUL");
	
		puts("=== BEFORE");
		printf("   SRC: %s\n", s);
		printf("C  DST: %s\n", d1);
		printf("42 DST: %s\n", d2);	
	
		puts("=== AFTER");
		printf("   SRC: %zu | %s\n", ft_strlen(s), s);
		printf("C  DST: %zu | %s\n", strlcpy(d1, s, 3), d1);
		printf("42 DST: %zu | %s\n", ft_strlcpy(d2, s, 3), d2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}

	{
		char d1[] = "000000000";
		char d2[] = "000000000";
		char s[] = "12345";
		
		puts("=== SIZE == 0");
		
		puts("=== BEFORE");
		printf("   SRC: %s\n", s);
		printf("C  DST: %s\n", d1);
		printf("42 DST: %s\n", d2);
		
		puts("=== AFTER");
		printf("   SRC: %zu | %s\n", ft_strlen(s), s);
		printf("C  DST: %zu | %s\n", strlcpy(d1, s, 0), d1);
		printf("42 DST: %zu | %s\n", ft_strlcpy(d2, s, 0), d2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}

	{
		char d1[] = "000000000";
		char d2[] = "000000000";
		char s[] = "12345";
	
		puts("=== SRC < SIZE");
	
		puts("=== BEFORE");
		printf("   SRC: %s\n", s);
		printf("C  DST: %s\n", d1);
		printf("42 DST: %s\n", d2);
	
		puts("=== AFTER");
		printf("   SRC: %zu | %s\n", ft_strlen(s), s);
		printf("C  DST: %zu | %s\n", strlcpy(d1, s, 10), d1);
		printf("42 DST: %zu | %s\n", ft_strlcpy(d2, s, 10), d2);
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}
	
	{
		char d1[] = "000000000";
		char d2[] = "000000000";
		char s[] = "12345";
	
		puts("=== SRC > SIZE");
	
		puts("=== BEFORE");
		printf("   SRC: %s\n", s);
		printf("C  DST: %s\n", d1);
		printf("42 DST: %s\n", d2);
	
		puts("=== AFTER");
		printf("   SRC: %zu | %s\n", ft_strlen(s), s);
		printf("C  DST: %zu | %s\n", strlcpy(d1, s, 3), d1);
		printf("42 DST: %zu | %s\n", ft_strlcpy(d2, s, 3), d2);
		printf("=== FINAL CHECK: %s\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}

	return (0);
}
