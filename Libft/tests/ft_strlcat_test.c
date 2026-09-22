/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:28:15 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 16:29:36 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_strlcat.c\n");

	{
		char d1[1024] = "0000000000";
		char d2[1024] = "0000000000";
		char s[] = "111111111111";
		size_t size = 5;
		
		puts("=== SIZE < SIZE[DST]");
		puts("=== note: the fn does NOT handle the reverse.");
		
		puts("=== BEFORE");
		printf("   SRC: [%zu]\n", ft_strlen(s));
		printf("C  DST: [%zu]\n", ft_strlen(d1));
		printf("42 DST: [%zu]\n", ft_strlen(d2));
		printf("  SIZE: [%zu]\n", size);
		
		puts("=== AFTER");
		printf("   SRC: [%zu]\n", ft_strlen(s));
		printf("C  DST: [%zu]\n", strlcat(d1, s, size));
		printf("42 DST: [%zu]\n", ft_strlcat(d2, s, size));
		printf("=== FINAL CHECK: %s\n\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}

	{
		char d1[] = "000000000";
		char d2[] = "000000000";
		char s[] = "111111";

		puts("=== SIZE = 0");
		
		puts("=== BEFORE");
		printf("   SRC: [%zu]\n", ft_strlen(s));
		printf("C  DST: [%zu]\n", ft_strlen(d1));
		printf("42 DST: [%zu]\n", ft_strlen(d2));

		puts("=== AFTER");
		printf("   SRC: [%zu]\n", ft_strlen(s));
		printf("C  DST: [%zu]\n", strlcat(d1, s, 0));
		printf("42 DST: [%zu]\n", ft_strlcat(d2, s, 0));
		printf("=== FINAL CHECK: %s\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}
	
	return (0);
}
