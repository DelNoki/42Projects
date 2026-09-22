/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinsard <morel.lucas44@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:00:11 by lpinsard          #+#    #+#             */
/*   Updated: 2026/09/22 16:00:11 by lpinsard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;

	d = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (*s)
		ft_memcpy(d, s, ft_strlen(s) + 1);
	return (d);
}
