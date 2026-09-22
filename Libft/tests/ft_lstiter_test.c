/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:43:20 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 11:45:09 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *data)
{
	if (data)
		free (data);
}

static void	ft_lstiter_helper(void *content)
{
	char *s = (char *)content;
	if (s)
	{
		while (*s)
		{
			*s = ft_toupper((unsigned char)*s);
			s++;
		}
	}
}

int	main()
{

	puts("\n================================= ft_lstiter.c\n");

	{
		t_list *lst = ft_lstnew(ft_strdup("Hello"));
		lst->next = ft_lstnew(ft_strdup("World!"));
	
		puts("=== BEFORE");
		char *s1 = lst->content;
		char *s2 = lst->next->content;
		printf("NODE CONTENT (s1) | %s\nNODE CONTENT (s2) | %s\n\n", s1, s2);
	
		ft_lstiter(lst, &ft_lstiter_helper);
		puts("=== AFTER");
		printf("NODE CONTENT (s1) | %s\nNODE CONTENT (s2) | %s\n\n", s1, s2);
		int check = (strcmp(lst->content, "HELLO") == 0 
					&& strcmp(lst->next->content, "WORLD!") == 0);
		printf("CHECK? %s\n", check ? "OK!" : "KO!");
		ft_lstclear(&lst, del);
	}
	
	return (0);
}
