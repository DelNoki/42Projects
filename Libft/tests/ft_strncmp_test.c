/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:59:20 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 17:00:35 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_strncmp.c\n");

	{
		char *s1 = "abcd";
		char *s2 = "abcd";
		size_t size = 3;

		puts("=== EQUAL STRINGS");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}

	{
		char s1[] = "abcdef";
		char s2[] = "abcxyz";
		size_t size = 3;

		puts("=== SAME 1ST 3 CHAR");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char s1[] = "abcdef";
		char s2[] = "abcxyz";
		size_t size = 4;

		puts("=== DIFFERENT 4TH POSITION");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abc";
		char s2[] = "ABC";
		size_t size = 3;

		puts("=== CASE SENSITIVE");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abc";
		char s2[] = "xyz";
		size_t size = 0;

		puts("=== SIZE = 0");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abc";
		char s2[] = "abcd";
		size_t size = 3;

		puts("=== s1 SHORTER");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcd";
		char s2[] = "abc";
		size_t size = 3;

		puts("=== s2 SHORTER");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "abcd";
		char s2[] = "abdc";
		size_t size = 3;

		puts("=== DIFFERENCE BEFORE SIZE");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char *s1= "";
		char *s2 = "";
		size_t size = 3;

		puts("=== BOTH EMPTY");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char s1[] = "";
		char s2[] = "abc";
		size_t size = 3;

		puts("=== s1 EMPTY");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char s1[] = "abc";
		char s2[] = "";
		size_t size = 3;

		puts("=== s2 EMPTY");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char *s1 = "qwerty";
		char *s2 = "qwerty";
		size_t size = 100;

		puts("=== SIZE > BOTH");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
	
	{
		char s1[] = "ab";
		char s2[] = "abcdef";
		size_t size = 3;

		puts("=== SIZE > s1");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}
		
	{
		char s1[] = "abcdef";
		char s2[] = "ab";
		size_t size = 3;

		puts("=== SIZE > s2");
		printf("ORIGINAL |  %d\n", strncmp(s1, s2, size));
		printf("CUSTOM   |  %d\n", ft_strncmp(s1, s2, size));
		printf("=== FINAL CHECK: %s\n",	
			(!!strncmp(s1, s2, size) == !!ft_strncmp(s1, s2, size)) ? "OK!" : "KO!");
	}

	return (0);
}
