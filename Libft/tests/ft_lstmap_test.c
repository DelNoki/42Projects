/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:46:57 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 11:49:53 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *data)
{
	if (data)
		free (data);
}

static void	*ft_lstmap_helper(void *content)
{
    char *str = (char *)content;
    char *new_str;
    int i = 0;

    if (content == NULL)
        return (NULL);
    new_str = ft_strdup(str);
    if (!new_str)
        return (NULL);
    while (new_str[i])
    {
        new_str[i] = ft_toupper(new_str[i]);
        i++;
    }
    return (new_str);
}

int	main()
{

	puts("\n================================= ft_lstmap.c\n");
	
	{
		t_list *lst_src = ft_lstnew(ft_strdup("content one"));
		lst_src->next = ft_lstnew(ft_strdup("content two"));
	  
		char *s1 = lst_src->content;
		char *s2 = lst_src->next->content;
		printf("NODE CONTENT (s1) | %s\nNODE CONTENT (s2) | %s\n\n", s1, s2);
		
		t_list *lst_dst = ft_lstmap(lst_src, &ft_lstmap_helper, free);
		printf("SRC CHECK ? s1 ? %s s2 ? %s\n\n",
				(strcmp(s1, "content one") == 0) ? "OK!" : "KO!",
				(strcmp(s2, "content two") == 0) ? "OK!" : "KO!");
		
		char *d1 = lst_dst->content;
		char *d2 = lst_dst->next->content;
		printf("NODE CONTENT (d1) | %s\nNODE CONTENT (d2) | %s\n\n", d1, d2);
		printf("SRC CHECK ? s1 ? %s s2 ? %s\n",
				(strcmp(s1, "content one") == 0) ? "OK!" : "KO!",
				(strcmp(s2, "content two") == 0) ? "OK!" : "KO!");
		printf("DST CHECK ? d1 ? %s d2 ? %s\n\n",
				(strcmp(d1, "CONTENT ONE") == 0) ? "OK!" : "KO!",
				(strcmp(d2, "CONTENT TWO") == 0) ? "OK!" : "KO!");
		
		ft_lstclear(&lst_src, del);
		ft_lstclear(&lst_dst, del);
	}

	return (0);
}
