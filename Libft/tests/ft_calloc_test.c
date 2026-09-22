/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:48:20 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 17:49:06 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{		
	puts("\n================================= ft_calloc.c\n");

	{
		size_t n = 5;
		size_t size = 3;
			
		void *t = ft_calloc(n, size);
		printf("ADRESS : %p\n", t);
		free(t);		
	}
	
	return (0);
}
