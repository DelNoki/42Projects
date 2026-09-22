/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:15:44 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 11:16:32 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	puts("\n================================= ft_lstnew.c\n");

	{
		int n = 42; 
		//fill the content(void)
		//malloc if using more than char or int
		t_list *node = ft_lstnew(&n);
		printf("NODE CONTENT : %d\n",*(int*)(node->content));
		free(node);
	}
	
	return (0);
}
