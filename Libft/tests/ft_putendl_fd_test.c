/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:30:13 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 12:31:51 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{

	ft_putendl_fd("\n================================= ft_putendl_fd.c\n", 1);

	{
		ft_putendl_fd("=== NON-EMPTY STR", 1);
		ft_putendl_fd("Hello World!\n", 1);
	}
	
	{
		ft_putendl_fd("=== EMPTY STR", 1);
		ft_putendl_fd("", 1);
	}
	
	return (0);
}
