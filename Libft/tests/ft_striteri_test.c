/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:21:42 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 12:22:38 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_striteri_helper(unsigned int i, char *s)
{
	(void)i;
	if (*s >= 'a' && *s <= 'z')
		*s -= 32;
}

int	main()
{

	puts("\n================================= ft_striteri.c\n");

	{
		char s[] = "Hello world!";
		printf("STRING | %s\n", s);
		ft_striteri(s, &ft_striteri_helper);
		printf("RESULT | %s\n", s);
	}

	return (0);
}
