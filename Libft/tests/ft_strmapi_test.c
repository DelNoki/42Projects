/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:18:24 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 12:20:47 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_strmapi_helper(unsigned int i, char c)
{
	(void)i;
	c = ft_toupper(c);
	return(c);		
}

int	main()
{

	puts("\n================================= ft_strmapi.c\n");

	{
		char *s = "Hello world!";
		char *d = ft_strmapi(s, &ft_strmapi_helper);
		printf("STRING | %s\n", s);
		printf("RESULT | %s\n", d);
		free(d);
	}
	
	return (0);
}
