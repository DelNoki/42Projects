/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinsard <morel.lucas44@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:00:40 by lpinsard          #+#    #+#             */
/*   Updated: 2026/09/22 16:00:40 by lpinsard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	len;

	src_len = ft_strlen(src);
	len = 0;
	if (size == 0)
		return (src_len);
	if (src_len < size)
		len = src_len;
	else
		len = size - 1;
	ft_memcpy(dst, src, len);
	dst[len] = '\0';
	return (src_len);
}
