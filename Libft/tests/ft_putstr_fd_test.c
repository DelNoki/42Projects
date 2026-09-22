/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:26:28 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 12:28:50 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{

	ft_putendl_fd("\n================================= ft_putstr_fd.c\n", 1);

	{
		ft_putendl_fd("=== NON-EMPTY STR", 1);
		ft_putstr_fd("Hello World!\n\n", 1);
	}
	
	{
		ft_putendl_fd("=== EMPTY STR", 1);
		ft_putstr_fd("", 1);
	}
	
	return (0);
}
