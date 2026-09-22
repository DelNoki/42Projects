/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:35:24 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 17:36:20 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{		

	puts("\n================================= ft_strnstr.c\n");

	{
		char big[] = "qwert asdfg zxcvb yuiop hjkl nm";
		char little[] = "zxcvb";
		size_t len = 20;

		puts("=== big && len > len_little");
		printf("BIG : %s\n", big);
		printf("ORIGINAL | %s\n", strnstr(big, little, len));	
		printf("CUSTOM	 | %s\n", ft_strnstr(big, little, len));	
		printf("=== FINAL CHECK: %s\n\n", (strcmp(strnstr(big, little, len), 
						ft_strnstr(big, little, len))) ? "KO!" : "OK!");
	}

	{
		char big[] = "qwert asdfg zxcvb yuiop hjkl nm";
		char little[] = "qwert";
		size_t len = 3;

		puts("=== big && len < len_little");
		printf("BIG : %s\n", big);
		printf("ORIGINAL | %s\n", strnstr(big, little, len));	
		printf("CUSTOM	 | %s\n", ft_strnstr(big, little, len));	
		printf("=== FINAL CHECK: unavailable\n\n");
	}

	{
		char big[] = "qwert asdfg zxcvb yuiop hjkl nm";
		char little[] = "000000";
		size_t len = strlen(big);

		puts("=== big && len > len_little");
		printf("BIG : %s\n", big);
		printf("ORIGINAL | %s\n", strnstr(big, little, len));	
		printf("CUSTOM	 | %s\n", ft_strnstr(big, little, len));	
		printf("=== FINAL CHECK: unavailable\n\n");
	}

	{
		char big[] = "";
		char little[] = "qwert";
		size_t len = strlen(big);

		puts("=== big EMPTY");
		printf("BIG : %s\n", big);
		printf("ORIGINAL | %s\n", strnstr(big, little, len));	
		printf("CUSTOM	 | %s\n", ft_strnstr(big, little, len));	
		printf("=== FINAL CHECK: unavailable\n\n");
	}

	{
		char big[] = "qwert asdfg zxcvb yuiop hjkl nm";
		char little[] = "qwert";
		size_t len = 0;

		puts("=== len == 0");
		printf("BIG : %s\n", big);
		printf("ORIGINAL | %s\n", strnstr(big, little, len));	
		printf("CUSTOM	 | %s\n", ft_strnstr(big, little, len));	
		printf("=== FINAL CHECK: unavailable\n");
	}
	
	return (0);
}
