/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:12:11 by lcollado          #+#    #+#             */
/*   Updated: 2022/10/06 19:56:54 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	s = (char *) malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s[i] = s2[j++];
		i++;
	}
	s[i] = '\0';
	return (s);
}


// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;

// 	char *str;
// 	int i = 5;
// 	while(i--)
// 	{
// 	//str = malloc(sizeof(char )* 9);
// 	//free(str);
// 	str = ft_strjoin(argv[1], argv[2]);
// 	//free(str);

// 	}
// 	system("leaks -q a.out");

// }