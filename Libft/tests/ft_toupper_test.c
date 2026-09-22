/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:32:13 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 16:32:56 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_toupper.c\n");
	
	{
		int tests[] = {31, 32, 42, 65, 90, 97, 122, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++) 
		{
			int og = toupper(tests[i]);
			int ft = ft_toupper(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%c] CUSTOM[%c]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft,
				(!!og == !!ft) ? "OK!" : "KO!");
		}
	}

	return (0);
}
