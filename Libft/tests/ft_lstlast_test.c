/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:26:09 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 11:26:43 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{

	puts("\n================================= ft_lstlast.c\n");
	
	{
		t_list *head = NULL;
		t_list *node_1 = ft_lstnew("A"); 
		t_list *node_2 = ft_lstnew("B"); 
		t_list *node_3 = ft_lstnew("C"); 
			
		ft_lstadd_front(&head, node_1);
		ft_lstadd_front(&head, node_2);
		ft_lstadd_front(&head, node_3);

		ft_lstlast(head);
		printf("LAST NODE CONTENT = %c\n", *(char *)(node_3->content));

		free(node_1);
		free(node_2);
		free(node_3);
	}

	return (0);
}
