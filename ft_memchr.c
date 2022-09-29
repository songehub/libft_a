/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccrecent <ccrecent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:52:57 by ccrecent          #+#    #+#             */
/*   Updated: 2022/09/27 10:10:38 by ccrecent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	cons;

	cons = (unsigned char) c;
	src = (unsigned char *) s;
	while (n--)
	{
		if (*src == cons)
			return (src);
		else
		src++;
	}
	return (NULL);
}
