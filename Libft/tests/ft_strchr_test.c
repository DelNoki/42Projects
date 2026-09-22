/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:38:58 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 16:39:43 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{		
	puts("\n================================= ft_strchr.c\n");

	{
		char s[] = "qwertcasdfgczxcvb";
		int c = 'c';
	
		puts("=== CHAR");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %s\n", strchr(s, c));
		printf("CUSTOM   | %s\n", ft_strchr(s, c));
		printf("=== FINAL CHECK: %s\n", (strcmp(strchr(s, c), ft_strchr(s, c))) ? "KO!" : "OK!");
	}

	{
		char s[] = "qwert\0casdfgczxcvb";
		int c = '\0';
		
		puts("\n=== CHAR = NUL");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %s\n", strchr(s, c));
		printf("CUSTOM   | %s\n", ft_strchr(s, c));
		printf("=== FINAL CHECK: unavailable\n");
	}

	return (0);
}
