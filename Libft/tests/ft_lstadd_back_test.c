/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:29:26 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 11:30:07 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{

	puts("\n================================= ft_lstadd_back.c\n");
	 
	{
		puts("=== ADD TO EMPTY LIST");
		
		t_list *head = NULL;
		t_list *add = ft_lstnew("content"); 
			
		ft_lstadd_back(&head, add);
		int check = (head == add && head->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");		
		free(add);
	}

	{
		puts("\n=== ADD TO NON EMPTY LIST");
		
		t_list *node = ft_lstnew("content"); 
		t_list *head = node;
		t_list *add = ft_lstnew("content"); 
			
		ft_lstadd_back(&head, add);
		int check = (head == node 
						&& head->next == add 
						&& head->next->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(add);
		free(node);
	}

	{
		puts("\n=== ADD EMPTY NODE");
		
		t_list *node = ft_lstnew("content");
		t_list *head = node; 
		t_list *add = NULL;

		ft_lstadd_back(&head, add);
		int check = (head == node && head->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node);
	}

	{
		puts("\n=== KEEP ADDING NODES");
		
		t_list *head = NULL;
		t_list *node_1 = ft_lstnew("A"); 
		t_list *node_2 = ft_lstnew("B"); 
		t_list *node_3 = ft_lstnew("C"); 
			
		ft_lstadd_back(&head, node_1);
		ft_lstadd_back(&head, node_2);
		ft_lstadd_back(&head, node_3);

		int check = (head == node_1 
						&& head->next == node_2 
						&& head->next->next == node_3 
						&& head->next->next->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node_3);
		free(node_2);
		free(node_1);
	}

	return (0);
}
