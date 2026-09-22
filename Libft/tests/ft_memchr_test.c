/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:27:59 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 17:30:32 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{		
	puts("\n================================= ft_memchr.c\n");
		
	{
		char s[] = "0123456789";
		int c = '3';
		size_t n = 5;
	
		puts("=== c BEFORE size");
		printf("ORIGINAL | %p\n", memchr(s, c, n));
		printf("CUSTOM   | %p\n", ft_memchr(s, c, n));
		printf("=== FINAL CHECK: %s\n\n",
			(memchr(s, c, n) == ft_memchr(s, c, n)) ? "OK!" : "KO!");
	}	
	
	{
		char s[] = "0123456789";
		int c = '7';
		size_t n = 5;
	
		puts("=== c AFTER size");
		printf("ORIGINAL | %p\n", memchr(s, c, n));
		printf("CUSTOM   | %p\n", ft_memchr(s, c, n));
		printf("=== FINAL CHECK: unavailable\n\n");	
	}	

	{
		char s[] = "0123456789";
		int c = 'c';
		size_t n = strlen(s);
	
		puts("=== c ABSENT");
		printf("ORIGINAL | %p\n", memchr(s, c, n));
		printf("CUSTOM   | %p\n", ft_memchr(s, c, n));
		printf("=== FINAL CHECK: unavailable\n\n");	
	}

	{
		char s[] = "0123456789";
		int c = '\0';
		size_t n = strlen(s);
	
		puts("=== c == NUL");
		printf("ORIGINAL | %p\n", memchr(s, c, n));
		printf("CUSTOM   | %p\n", ft_memchr(s, c, n));
		printf("=== FINAL CHECK: unavailable\n");	
	}
	
	return (0);
}
