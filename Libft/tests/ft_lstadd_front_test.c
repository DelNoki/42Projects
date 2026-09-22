/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:19:50 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 11:20:16 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	
	puts("\n================================= ft_lstadd_front.c\n");
	
	{
		puts("=== ADD TO EMPTY LIST");
		
		t_list *head = NULL;
		t_list *node = ft_lstnew("content"); 
			
		ft_lstadd_front(&head, node);
		int check = (head == node && head->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");		
		free(node);
	}

	{
		puts("\n=== ADD TO NON EMPTY LIST");
		
		t_list *node = ft_lstnew("content"); 
		t_list *head = node;
		t_list *add = ft_lstnew("content"); 
			
		ft_lstadd_front(&head, add);
		int check = (head == add && head->next == node);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node);
		free(add);
	}

	{
		puts("\n=== ADD EMPTY NODE");
		
		t_list *node = ft_lstnew("content");
		t_list *head = NULL; 
		t_list *add = NULL;

		ft_lstadd_front(&head, add);
		printf("RESULT? OK!\n");
		free(node);
		free(add);
	}

	{
		puts("\n=== KEEP ADDING NODES");
		
		t_list *head = NULL;
		t_list *node_1 = ft_lstnew("A"); 
		t_list *node_2 = ft_lstnew("B"); 
		t_list *node_3 = ft_lstnew("C"); 
			
		ft_lstadd_front(&head, node_1);
		ft_lstadd_front(&head, node_2);
		ft_lstadd_front(&head, node_3);
		int check = (head == node_3
					 	&& head->next == node_2 
						&& head->next->next == node_1 
						&& head->next->next->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node_3);
		free(node_2);
		free(node_1);
	}

	return (0);
}
