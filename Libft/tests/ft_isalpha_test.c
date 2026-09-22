/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:25:25 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/28 18:31:24 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_isalpha.c\n");
	
	int tests[] = {31, 32, 64, 65, 90, 91, 96, 97, 122, 123, 126, 127, 300, 0, -1};
	for (int i = 0; tests[i]; i++)
	{
		int og = isalpha(tests[i]);
		int ft = ft_isalpha(tests[i]);
		printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft, (!!og == !!ft) ? "OK!" : "KO!");
	}
	return (0);
}
