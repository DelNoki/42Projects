/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:41:37 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 14:44:07 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_bzero.c\n");

	{
		char s1[10] = "000000000";
		char s2[10] = "000000000";
		size_t n = 8;

		puts("=== BEFORE");
		printf("ORIGINAL | %s\nCUSTOM   | %s\n", s1, s2);
		puts("=== AFTER");
		bzero(s1, n);
		ft_bzero(s2, n);
		printf("ORIGINAL | %s\nCUSTOM   | %s\n", &s1[n], &s2[n]);
		printf("=== FINAL CHECK: %s\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
	}

	return (0);
}
