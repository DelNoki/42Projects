/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:16:17 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 12:17:09 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{

	puts("\n================================= ft_itoa.c\n");

	{
		int n = 1234567890;
		char *s;

		puts("=== ALL DIGITS");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	{
		int n = -1234567890;
		char *s;

		puts("\n=== NEGATIVE NUMBER");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	{
		int n = 2147483647;
		char *s;

		puts("\n=== INT MAX");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	{
		int n = -2147483648;
		char *s;

		puts("\n=== INT MIN");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	{
		int n = 9;
		char *s;

		puts("\n=== SINGLE DIGIT");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	{
		int n = 0;
		char *s;

		puts("\n=== ZERO");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	return (0);
}
