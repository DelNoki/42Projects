/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:55:21 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 11:55:52 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	
	puts("\n================================= ft_strjoin.c\n");

	{
		char *s1 = "Hello ";
		char *s2 = "World!";
		char *str;
		
		puts("=== BOTH EXIST");
		printf("s1 : %s | s2 : %s\n", s1, s2);	
		str = ft_strjoin(s1, s2);
		printf("RESULT : %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "";
		char *s2 = "";
		char *str;

		puts("=== BOTH EMPTY");
		printf("s1 : %s | s2 : %s\n", s1, s2);	
		str = ft_strjoin(s1, s2);
		printf("RESULT : %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "";
		char *s2 = "World!";
		char *str;

		puts("=== s1 EMPTY");
		printf("s1 : %s | s2 : %s\n", s1, s2);	
		str = ft_strjoin(s1, s2);
		printf("RESULT : %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "Hello ";
		char *s2 = "";
		char *str;

		puts("=== s2 EMPTY");
		printf("s1 : %s | s2 : %s\n", s1, s2);	
		str = ft_strjoin(s1, s2);
		printf("RESULT : %s\n", str);
		free(str);
	}

	return (0);
}
