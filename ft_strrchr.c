/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:31:53 by lcollado          #+#    #+#             */
/*   Updated: 2022/09/27 18:31:55 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	if (c == '\0')
		return (((char *)s) + len);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return (((char *)s) + len);
		len--;
	}
	return (0);
}
/*
int main()
{
  char str[] = "bonjour";
  char * ch = ft_strrchr(str + 2,'b');
  printf("%s", ch);
  return 0;
}*/
