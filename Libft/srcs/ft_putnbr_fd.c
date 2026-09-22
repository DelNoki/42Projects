/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinsard <morel.lucas44@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:59:48 by lpinsard          #+#    #+#             */
/*   Updated: 2026/09/22 15:59:48 by lpinsard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nba;

	nba = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nba = -n;
	}
	if (nba > 9)
	{
		ft_putnbr_fd(nba / 10, fd);
		ft_putnbr_fd(nba % 10, fd);
	}
	else
		ft_putchar_fd(nba + '0', fd);
}
