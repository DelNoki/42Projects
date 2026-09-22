/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinsard <morel.lucas44@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:01:03 by lpinsard          #+#    #+#             */
/*   Updated: 2026/09/22 16:01:03 by lpinsard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;

	len_little = ft_strlen(little);
	if (*little == 0)
		return ((char *)big);
	while (*big && len >= len_little)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, len_little) == 0)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
