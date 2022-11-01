/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:03:43 by lcollado          #+#    #+#             */
/*   Updated: 2022/09/26 18:07:52 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				sign;
	int				result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] == 32) || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == 45)
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == 43)
		i++;
	while ((nptr[i] != 0) && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
int	main()
{
	char s[] = "98";
	printf("%d", ft_atoi("\t\n\r\v\f  469 \n"));
	//printf("%d", atoi("\t\n\r\v\f  469 \n"));
}*/
