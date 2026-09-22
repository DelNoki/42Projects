/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:22:55 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 14:24:46 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_isprint.c\n");

	{
		int tests[] = {31, 32, 126, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++)
		{
			int og = isascii(tests[i]);
			int ft = ft_isascii(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
					tests[i], tests[i], og, ft, (!!og == !!ft) ? "OK!" : "KO!");
		}
	}

	return (0);
}
