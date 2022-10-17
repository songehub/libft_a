/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccrecent <ccrecent@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:43:59 by ccrecent          #+#    #+#             */
/*   Updated: 2022/10/17 15:28:12 by ccrecent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{

	
}

int main(void)
{
    char s[] = "Cadena de Prueba";
	char c = ' ';
	int i = 0;
	char **str = ft_split(s, c);
    
	while (i < 10)
	{
		printf("%s\n", str[i]);
		i++;		
	}
} 