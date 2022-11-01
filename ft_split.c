/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:45:54 by lcollado          #+#    #+#             */
/*   Updated: 2022/10/26 18:04:16 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void check_leaks(void) { 
	system("leaks -q a.out\n"); 
} 

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(s[i])
	{
		while (s[i]  == c)
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**arr_mem(char const *s, char c)
{ 
	char	**str;
	int		num_words;

	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	str = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[num_words] = NULL;
	return (str); 
}


char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		start;
	// char	*sub;
	
	if (s == NULL)
		return (NULL);
	str = arr_mem(s, c);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while(s[i] && s[i] != c)
			i++;
		str[j++] = ft_substr(s, start, i - start);
		if (str[j - 1] == NULL)
		{
			free(str[j - 1]);
			str[j - 1] = NULL;
		}
	}
	return (str);
}
/*
int	main()
{
	char	**str;
	// char	*s = "         Ho  la q u   a";
	int		i;

	// atexit(check_leaks);
	// str = ft_split(NULL, ' ');
	//str = ft_split("ho la", ' ');
	str = ft_split("           ", ' ');
	i = 0;
	//printf("%s", str[0]);
	if (str != NULL)
	{
		while (str[i])
		{
			printf("%s\n", str[i]);
			free(str[i]);
			i++;
		}
		free(str);
	}
	return 0;
}*/