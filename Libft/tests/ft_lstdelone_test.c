/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:34:41 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 11:35:52 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *data)
{
	if (data)
		free (data);
}

int	main()
{

	puts("\n================================= ft_lstdelone.c\n");

	{
		char *s = ft_strdup("content");
		t_list *node = ft_lstnew(s);
		ft_lstdelone(node, del);
		printf("Check leaks with Valgrind: no leaks? OK!\n");
	}
	
	return (0);
}
