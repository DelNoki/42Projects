/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:35:08 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 16:36:39 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_tolower.c\n");

		{
			int tests[] = {31, 32, 42, 65, 90, 97, 122, 127, 300, 0, -1};
			for (int i = 0; tests[i]; i++) 
			{
				int og = tolower(tests[i]);
				int ft = ft_tolower(tests[i]);
				printf("TEST: %d ('%c')\nORIGINAL[%c] CUSTOM[%c]\n=== FINAL CHECK: %s\n\n",
					tests[i], tests[i], og, ft,	(!!og == !!ft) ? "OK!" : "KO!");
			}
		}
	
	return (0);
}
