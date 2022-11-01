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
	while ((s[i] != 0) && (s[i] != c))
		i++;
	if ((s[i] == c))
		return (&((char *)s)[i]);
	return (NULL);
}
/*
int	main(){
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	//ret = strchr(str, ch);
	char s[] = "tripouille";
	//ret = ft_strchr("bonjour", '\0');
	//ret = ft_strchr(s, 't' + 256);
	ret = strchr(s, 't' + 256);

	printf("%s", ret);
   
	return(0);
}*/