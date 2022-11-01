/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:27:53 by lcollado          #+#    #+#             */
/*   Updated: 2022/09/27 18:27:57 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)s1;
	d = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s[i] != d[i])
			return (s[i] - d[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdefadfefewfwefe", 8);
   memcpy(str2, "ABCDEF", 8);

  //ret = memcmp(str1, str2, 9);
   ret = ft_memcmp(str1, str2, 5);
   printf("%d\n", ret);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/