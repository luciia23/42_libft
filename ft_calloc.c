/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:36:21 by lcollado          #+#    #+#             */
/*   Updated: 2022/10/26 18:03:12 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*s;

	s = malloc(nmeb * size);
	if (!s)
		return (NULL);
	if ((nmeb <= 0) || (size <= 0) || (nmeb == SIZE_MAX && size == SIZE_MAX))
		return (NULL);
	ft_bzero(s, nmeb * size);
	return (s);
}
