/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:38:11 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 17:45:20 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{		

	puts("\n================================= ft_atoi.c\n");

	{
		char s[] = "0";
		puts("=== ZERO");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %d\n", atoi(s));
		printf("CUSTOM   | %d\n", ft_atoi(s));
		printf("=== FINAL CHECK: %s\n\n",	(!!atoi(s) == !!ft_atoi(s)) ? "OK!" : "KO!");
	}
	
	{
		char s[] = "9";
		puts("=== SINGLE DIGIT");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %d\n", atoi(s));
		printf("CUSTOM   | %d\n", ft_atoi(s));
		printf("=== FINAL CHECK: %s\n\n",	(!!atoi(s) == !!ft_atoi(s)) ? "OK!" : "KO!");
	}
	
	{
		char s[] = "-2147483648";
		puts("=== INT MIN");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %d\n", atoi(s));
		printf("CUSTOM   | %d\n", ft_atoi(s));
		printf("=== FINAL CHECK: %s\n\n",	(!!atoi(s) == !!ft_atoi(s)) ? "OK!" : "KO!");
	}
	
	{
		char s[] = "2147483647";
		puts("=== INT MAX");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %d\n", atoi(s));
		printf("CUSTOM   | %d\n", ft_atoi(s));
		printf("=== FINAL CHECK: %s\n\n",	(!!atoi(s) == !!ft_atoi(s)) ? "OK!" : "KO!");
	}
	
	{
		char s[] = "   0123456789 0123456789";
		puts("=== ISSPACE");
		printf("TEST STR | %s\n", s);
		printf("ORIGINAL | %d\n", atoi(s));
		printf("CUSTOM   | %d\n", ft_atoi(s));
		printf("=== FINAL CHECK: %s\n",	(!!atoi(s) == !!ft_atoi(s)) ? "OK!" : "KO!");
	}
	
	return (0);
}
