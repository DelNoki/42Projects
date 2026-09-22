/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:35:59 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 14:40:35 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_memset.c\n");
	
	{
		char s1[] = "000000000";
		char s2[] = "000000000";
		
		puts("=== BEFORE");
		printf("ORIGINAL | %s\nCUSTOM   | %s\n", s1, s2);
		puts("=== AFTER");
		memset(s1, 'c', 3);
		ft_memset(s2, 'c', 3);
		printf("ORIGINAL | %s\nCUSTOM   | %s\n", s1, s2);
		printf("=== FINAL CHECK: %s\n", (strcmp(s1, s2)) ? "KO!" : "OK!");
	}

	return (0);
}
