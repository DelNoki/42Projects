/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:50:32 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 17:52:00 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_strdup.c\n");
	
	{
		char s[] = "qwert asdfg zxcvb";
		char *d1;			
		char *d2;

		puts("=== *s EXISTS");
		printf("TEST STR | %s\n", s);
		d1 = strdup(s);
		printf("ORIGINAL | %s\n", d1);
		d2 = ft_strdup(s);
		printf("CUSTOM	 | %s\n", d2);
		printf("=== FINAL CHECK: %s\n\n", 
			(strcmp(d1, d2)) ? "KO!" : "OK!");
		free(d1);
		free(d2);
	}

	{
		char s[] = "";
		char *d1;			
		char *d2;
		puts("=== *s DOES NOT EXIST");
		printf("TEST STR | %s\n", s);
		d1 = strdup(s);
		printf("ORIGINAL | %s\n", d1);
		d2 = ft_strdup(s);
		printf("CUSTOM	 | %s\n", d2);
		printf("=== FINAL CHECK: %s\n\n", 
			(strcmp(d1, d2)) ? "KO!" : "OK!");
		free(d1);
		free(d2);
	}

	return (0);
}
