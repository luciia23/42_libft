/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:35:04 by lcollado          #+#    #+#             */
/*   Updated: 2022/11/10 17:16:07 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


void check_leaks(void) { 
	system("leaks -q a.out\n"); 
}

static char	*make_subs(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	unsigned int	j;

	subs = (char *) malloc(sizeof(*s) * (len + 1));
	if (!subs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;

	checkLen();
	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	subs = make_subs(s, start, len);
	printf("%p", subs);
	if (!subs)
		return (NULL);
	return (subs);
}

// int	main()
// {
// 	atexit(check_leaks);
// 	char	str[] = "tripouille";
// 	printf("%s", ft_substr(str, 0, 4200));
// }