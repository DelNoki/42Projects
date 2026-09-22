/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:57:51 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 18:04:14 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_substr.c\n");

	{
		char const *s = "0123456789 0123456789";
		unsigned int start = 4;
		size_t len = 3;
		char *str;

		puts("=== s len > start + len");
		str = ft_substr(s, start, len);
		printf("RESULT : %s\n\n", str);
		free(str);
	}
	
	{
		char const *s = "0123456789 0123456789";
		unsigned int start = 100;
		size_t len = 3;
		char *str;

		puts("=== start > s len");
		str = ft_substr(s, start, len);
		printf("RESULT : %s\n\n", str);
		free(str);
	}

	{
		char const *s = "0123456789 0123456789";
		unsigned int start = 3;
		size_t len = ft_strlen(s) + start + 42;
		char *str;

		puts("=== start + len > s len");
		str = ft_substr(s, start, len);
		printf("RESULT : %s\n", str);
		free(str);
	}

	return (0);
}
