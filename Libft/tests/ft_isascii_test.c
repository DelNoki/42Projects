/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:16:21 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 14:18:24 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	puts("\n================================= ft_isascii.c\n");

	{
		int tests[] = {1, 2, 3, 125, 126, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++)
		{
			int og = isascii(tests[i]);
			int ft = ft_isascii(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
					tests[i], tests[i], og, ft,
					(!!og == !!ft) ? "OK!" : "KO!");
		}
	}

	return (0);
}
