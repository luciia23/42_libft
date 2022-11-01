/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:50:33 by lcollado          #+#    #+#             */
/*   Updated: 2022/09/27 18:35:06 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	unsigned int	i;

	str = s;
	i = 0;
	while (i < n)
	{
		if ((char)c == str[i])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   //ret = memchr(str, ch, strlen(str));
    ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
