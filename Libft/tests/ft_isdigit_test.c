/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:41:39 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 11:44:03 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_isdigit.c\n");
	{
		int tests[] = {31, 32, 47, 48, 57, 58, 126, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++)
		{
			int og = isdigit(tests[i]);
			int ft = ft_isdigit(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
			tests[i], tests[i], og, ft,
			(!!og == !!ft) ? "OK!" : "KO!");
		}
	}
	return (0);
}
