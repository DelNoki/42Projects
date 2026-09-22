/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:58:00 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 16:32:12 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{

	puts("\n================================= ft_strtrim.c\n");

	{
		char *s1 = "#&*qwert---asdfg---zxcvb---yuiop#&*";
		char *set = "#&*";
		char *str;
		
		puts("=== SET @ START & END");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "#&*qwert---asdfg---zxcvb---yuiop";
		char *set = "#&*";
		char *str;
		
		puts("=== SET @ START");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "qwert---asdfg---zxcvb---yuiop#&*";
		char *set = "#&*";
		char *str;
		
		puts("=== SET @ END");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "&#*qwert asdfg zxcvb yuiop*#&";
		char *set = "#&*";
		char *str;
		
		puts("=== SET REVERSE");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "qwert #&* asdfg zxcvb yuiop";
		char *set = "#&*";
		char *str;
		
		puts("=== SET IN THE MIDDLE");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "&#* qwert asdfg #&* zxcvb yuiop #&*";
		char *set = "#&*";
		char *str;
		
		puts("=== SET START, END && MIDDLE");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "&* qwert asdfg #&* zxcvb yuiop #&";
		char *set = "#&*";
		char *str;
		
		puts("=== PARTIAL SET");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "";
		char *set = "#&*";
		char *str;
		
		puts("=== EMPTY S1");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
	
	{
		char *s1 = "---qwert---asdfg---zxcvb---yuiop---";
		char *set = "";
		char *str;
		
		puts("=== EMPTY SET");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "";
		char *set = "";
		char *str;
		
		puts("=== BOTH EMPTY");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "---qwert---asdfg---zxcvb---yuiop---";
		char *set = "000";
		char *str;
		
		puts("=== SET ABSENT");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}

	{
		char *s1 = "%#$$%#$";
		char *set = "#$%";
		char *str;
		
		puts("=== ONLY SET");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}

	{
		char *s1 = "%#$#C$%#$";
		char *set = "#$%";
		char *str;
		
		puts("=== SET BUT 1");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n", str);
		free(str);
	}

	return (0);
}	
