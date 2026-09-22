/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:32:38 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/30 12:33:19 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{

	ft_putendl_fd("\n================================= ft_putnbr_fd.c\n", 1);

	{
		ft_putendl_fd("=== ALL DIGITS", 1);
		ft_putnbr_fd(1234567890, 1);
		ft_putendl_fd("\n", 1);
	}
	
	{
		ft_putendl_fd("=== INT_MAX", 1);
		ft_putnbr_fd(2147483647, 1);
		ft_putendl_fd("\n", 1);
	}
	
	{
		ft_putendl_fd("=== INT_MIN", 1);
		ft_putnbr_fd(-2147483648, 1);
		ft_putendl_fd("\n", 1);
	}
	
	{
		ft_putendl_fd("=== SINGLE DIGIT", 1);
		ft_putnbr_fd(9, 1);
		ft_putendl_fd("\n", 1);
	}

	{
		ft_putendl_fd("=== ZERO", 1);
		ft_putnbr_fd(0, 1);
		ft_putendl_fd("\n", 1);
	}

	return(0);
}
