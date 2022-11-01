/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:57:07 by lcollado          #+#    #+#             */
/*   Updated: 2022/10/18 17:30:56 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while ((s[i] != 0) && (s[i] != (unsigned char)c))
		i++;
	if ((s[i] == (unsigned char)c))
		return (&((char *)s)[i]);

	/*while (s[i] != 0)
	{
		if ((unsigned char)s[i] == (unsigned char )c)
			return ((char *)s);
		i++;
	}*/
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
/*
int	main(){
	//ret = strchr(str, ch);
	char s[] = "tripouille";
	//ret = ft_strchr("bonjour", '\0');
	//ret = ft_strchr(s, 't' + 256);

	printf("%s", ft_strchr(s, 't' + 256));
   
	return(0);
}*/