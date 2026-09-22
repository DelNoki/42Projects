/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:27:28 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/29 14:32:09 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	puts("\n================================= ft_strlen.c\n");

	{
		puts("=== NON EMPTY STR");
		char *s = "Excusatio non petita, accusatio manifesta";
		printf("ORIGINAL: %ld | CUSTOM: %ld\n=== FINAL CHECK: %s\n\n",
		strlen(s), ft_strlen(s), (!!strlen(s) == !!ft_strlen(s)) ? "OK!" : "KO!");
	}
	
	{
		puts("=== EMPTY STR");
		char *s = "";
		printf("ORIGINAL: %ld | CUSTOM: %ld\n=== FINAL CHECK: %s\n\n",
		strlen(s), ft_strlen(s), (!!strlen(s) == !!ft_strlen(s)) ? "OK!" : "KO!");
	}
	
	return (0);
}
