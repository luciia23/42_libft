/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:35:04 by lcollado          #+#    #+#             */
/*   Updated: 2022/10/06 19:58:39 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	subs = (char *) malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	while (s[i] != 0)
	{
		if (i >= start && j < len)
		{
			subs[j] = s[i];
			j++;
		}
		i++;
	}
	subs[j] = '\0';
	return (subs);
}
/*
int	main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	printf("%s", ft_substr(str, 0, 10));
}*/