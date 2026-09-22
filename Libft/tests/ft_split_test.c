/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:13:05 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 12:14:05 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{

	puts("\n================================= ft_split.c\n");
	
	{
		char *s = "-qwert-asdfg-zxcvb-yuiop-";
		char c = '-';
		char **array;
		size_t i = 0;

		puts("=== DIV START, MIDDLE & END");
		printf("STRING  | %s\nDIVIDER | %c\n\n", s, c);
		array = ft_split(s, c);
		while (array[i] != NULL)
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		printf("\nTOTAL WORDS: %lu\n", i);
		i = 0;
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
 	
	{
		char *s = "-qwert-asdfg-zxcvb-yuiop";
		char c = '-';
		char **array;
		size_t i = 0;
			
		puts("\n=== DIV START & MIDDLE");
		printf("STRING  | %s\nDIVIDER | %c\n\n", s, c);
		array = ft_split(s, c);
		while (array[i])
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		printf("\nTOTAL WORDS: %lu\n", i);
		i = 0;
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
 	
	{
		char *s = "qwert-asdfg-zxcvb-yuiop-";
		char c = '-';
		char **array;
		size_t i = 0;
		
		puts("\n=== DIV MIDDLE & END");
		printf("STRING  | %s\nDIVIDER | %c\n\n", s, c);
		array = ft_split(s, c);
		while (array[i])
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		printf("\nTOTAL WORDS: %lu\n", i);
		i = 0;
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
 
	{
		char *s = "-qwert-asdfg-zxcvb-yuiop-";
		char c = '\0';
		char **array;
		size_t i = 0;
		
		puts("\n=== NUL DIV");
		printf("STRING  | %s\nDIVIDER | %c\n\n", s, c);
		array = ft_split(s, c);
		while (array[i])
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		printf("\nTOTAL WORDS: %lu\n", i);
		i = 0;
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
 
	{
		char *s = "";
		char c = '-';
		char **array;
		size_t i = 0;
		
		puts("\n=== EMPTY S");
		printf("STRING  | %s\nDIVIDER | %c\n", s, c);
		array = ft_split(s, c);
		while (array[i])
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		printf("\nTOTAL WORDS: %lu\n", i);
		i = 0;
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
	
	{
		char *s = "----------";
		char c = '-';
					
		puts("\n=== ONLY SEP");
		printf("STRING  | %s\nDIVIDER | %c\n", s, c);
		printf("\nTOTAL WORDS: 0\n");
	} 
	
	return (0);
}
