/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:53:07 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 11:56:43 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
puts("\n================================= ft_isalnum.c\n");

	{
		int tests[] = {31, 32, 47, 48, 57, 58, 64, 65, 90, 91, 96, 97, 122, 123, 126, 127, 300, 0, -1};
		for (int i = 0; tests[i]; i++)
		{
			int og = isalnum(tests[i]);
			int ft = ft_isalnum(tests[i]);
			printf("TEST: %d ('%c')\nORIGINAL[%d] CUSTOM[%d]\n=== FINAL CHECK: %s\n\n",
				tests[i], tests[i], og, ft,
				(!!og == !!ft) ? "OK!" : "KO!");
		}
	}
	return (0);
}
