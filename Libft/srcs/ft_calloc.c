/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinsard <morel.lucas44@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:56:58 by lpinsard          #+#    #+#             */
/*   Updated: 2026/09/22 15:56:58 by lpinsard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*t;

	t = malloc(nmemb * size);
	if (t)
	{
		ft_memset(t, '\0', nmemb * size);
		return (t);
	}
	return (NULL);
}
