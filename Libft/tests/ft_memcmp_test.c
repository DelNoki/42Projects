/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:32:00 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 17:32:40 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{		
	puts("\n================================= ft_memcmp.c\n");

	{
		char s1[] = "abcdef";
		char s2[] = "abcdef";
		size_t n = 3;

		puts("=== EQUAL STRINGS");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcdef";
		char s2[] = "abcxyz";
		size_t n = 3;

		puts("=== DIFFERENCE AFTER n");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "abcxyz";
		size_t n = 4;

		puts("=== DIFFERENCE BEFORE n");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "ABCDEF";
		size_t n = 3;

		puts("=== CASE SENSITIVE");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "abcdef";
		size_t n = 0;

		puts("=== SIZE == 0");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abc";
		char s2[] = "abcdef";
		size_t n = 3;

		puts("=== s1 SHORTER");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "abc";
		size_t n = 3;

		puts("=== s2 SHORTER");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[1024] = "";
		char s2[1024] = "";
		size_t n = 3;

		puts("=== BOTH EMPTY");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[1024] = "";
		char s2[] = "abcdef";
		size_t n = 3;

		puts("=== s1 EMPTY");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcdef";
		char s2[1024] = "";
		size_t n = 3;

		puts("=== s2 EMPTY");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[1024] = "abcdef";
		char s2[1024] = "abcdef";
		size_t n = 10;

		puts("=== SIZE > BOTH");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "ab";
		char s2[] = "abcdef";
		size_t n = 3;

		puts("=== SIZE > s1");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcdef";
		char s2[] = "ab";
		size_t n = 3;

		puts("=== SIZE > s2");
		printf("ORIGINAL |  %d\n", memcmp(s1, s2, n));
		printf("CUSTOM   |  %d\n", ft_memcmp(s1, s2, n));
		printf("=== FINAL CHECK: %s\n",	
			(!!memcmp(s1, s2, n) == !!ft_memcmp(s1, s2, n)) ? "OK!" : "KO!");
	}
	
	return (0);
}
