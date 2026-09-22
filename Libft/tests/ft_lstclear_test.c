/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:40:41 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 11:40:44 by spacotto         ###   ########.fr       */
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

	puts("\n================================= ft_lstclear.c\n");
	
	{
		char *s1 = ft_strdup("content");
		t_list *node_1 = ft_lstnew(s1);
		t_list *head = node_1;

		char *s2 = ft_strdup("content");
		t_list *node_2 = ft_lstnew(s2);
		ft_lstadd_back(&head, node_2);
		
		char *s3 = ft_strdup("content");
		t_list *node_3 = ft_lstnew(s3);
		ft_lstadd_back(&head, node_3);
		
		ft_lstclear(&head, del);	
		printf("Check leaks with Valgrind: no leaks? OK!\n");
	}

	return (0);
}
