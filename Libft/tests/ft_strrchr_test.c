/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:52:36 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 16:53:24 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_strrchr.c\n");

	{
		char s[] = "qwertcasdfgczxcvb";
		int c = 'c';
		
		puts("=== CHAR");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %s\n", strrchr(s, c));
		printf("CUSTOM   | %s\n", ft_strrchr(s, c));
		printf("=== FINAL CHECK: %s\n", (strcmp(strrchr(s, c), ft_strrchr(s, c))) ? "KO!" : "OK!");
        }

	{
		char s[] = "qwert\0casdfgczxcvb";
		int c = 'c';
		
		puts("\n=== CHAR = NUL");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %s\n", strrchr(s, c));
		printf("CUSTOM   | %s\n", ft_strrchr(s, c));
		printf("=== FINAL CHECK: unavailable\n");		
	}

	return (0);
}
