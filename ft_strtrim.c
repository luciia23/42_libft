/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:41:53 by lcollado          #+#    #+#             */
/*   Updated: 2022/10/20 15:55:45 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*set_mem(int start, int end)
{
	char	*str;

	// printf("%d %d \n", start, end);
	str = (char *)malloc(((end - start) + 1 ) * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (str);

}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	int		start;
	int		end;
	// int		size;
	int		i;

	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	start = 0;
	while(s1[start])
	{
		if (ft_strchr(set, s1[start]) == NULL)
			break;
		start++;
	}
	end = ft_strlen(s1);
	while(s1[end - 1] && end > start)
	{
		if (ft_strchr(set, s1[end - 1]) == NULL)
			break ;
		end--;
	}
	// size = ft_strlen(s1) - start - (ft_strlen(1) - end);
	// printf("%d\n", size);
	strim = set_mem(start, end); //REVISAR
	if (strim == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		strim[i++] = s1[start++];
	strim[i] = 0;
	return (strim);
}

// int main(){
// 	const char *str = "   xxxtripouille   xxx";
// 	const char *set = " x";
// 	printf("%s\n", str);
// 	char *trim = ft_strtrim(str, set);
// 	printf("%s\n", trim);
// 	return (0);
// }

