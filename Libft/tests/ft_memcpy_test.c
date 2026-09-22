/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:46:56 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 14:49:22 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_memcpy.c\n");

	{
		char d1[1024];
		char d2[1024];
		char s[] = "Audaces fortuna iuvat";

		printf("=== BEFORE\n");
		printf("   SRC: %p | %s\n", s, &s[0]);
		printf(" C DST: %p | %s\n", d1, &d1[0]);
		printf("42 DST: %p | %s\n", d2, &d2[0]);
		
		printf("=== AFTER\n");
		printf("   SRC: %p | %s\n", s, &s[0]);
		memcpy(d1, s, 7);
		printf(" C DST: %p | %s\n", d1, &d1[0]);
		ft_memcpy(d2, s, 7);
		printf("42 DST: %p | %s\n", d2, &d2[0]);
		printf("=== FINAL CHECK: %s\n", (strcmp(d1, d2)) ? "KO!" : "OK!");
	}

	return (0);
}
