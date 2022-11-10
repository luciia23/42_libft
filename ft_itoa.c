/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:19:28 by lcollado          #+#    #+#             */
/*   Updated: 2022/11/07 18:14:54 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

void check_leaks(void) { 
	system("leaks -q a.out\n"); 
}

static size_t	number_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	to_string(int num, char *s, size_t len, int sign)
{
	s[len] = '\0';
	while (len--)
	{
		s[len] = (num % 10) + 48;
		num = num / 10;
	}
	if (sign == 0)
		s[0] = '-';
}

char	*ft_itoa(int n)
{
	size_t	len;
	int		sign;
	char	*s;

	len = number_len(n);
	sign = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign = 0;
		n = n * (-1);
	}
	to_string(n, s, len, sign);
	return (s);
}

// int	main()
// {
// 	atexit(check_leaks);
// 	char *aaa;
// 	aaa = ft_itoa(-2147483648);
// 	int i = 0;
// 	while (aaa[i])
// 	{
// 		printf("%c\n", aaa[i]);
// 		i++;
// 	}
// 	printf("%s\n", aaa);
// 	// system("leaks -q a.out");
// 	free(aaa);
// 	// printf("!!!!!!!!!!!!!!!!!!!!\n");
// 	return 0;
// }