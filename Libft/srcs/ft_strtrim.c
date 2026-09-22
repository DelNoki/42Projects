/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinsard <morel.lucas44@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:01:13 by lpinsard          #+#    #+#             */
/*   Updated: 2026/09/22 16:01:13 by lpinsard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimchr(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_trim	t;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_calloc(1, sizeof(char)));
	t.start = (char *)s1;
	while (*t.start && ft_trimchr(set, *t.start))
		t.start++;
	if (!*t.start)
		return (ft_calloc(1, sizeof(char)));
	t.end = (char *)t.start + ft_strlen(t.start) - 1;
	while (t.start < t.end && ft_trimchr(set, *t.end))
		t.end--;
	t.trimlen = (t.end - t.start) + 1;
	t.trim = ft_calloc(t.trimlen + 1, sizeof(char));
	if (!t.trim)
		return (NULL);
	ft_memcpy(t.trim, t.start, t.trimlen);
	t.trim[t.trimlen] = '\0';
	return (t.trim);
}
