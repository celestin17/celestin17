/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 14:28:08 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/22 14:57:11 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	int a;
	char *dest;

	i = 0;
	a = 0;
	while (src[a])
	{
		a++;
	}
	dest = (char*)malloc(sizeof(*src) * (a + 1));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
int main (void)
{
	char src[] = "trouducul";
	ft_strdup(src);
	printf("%s",ft_strdup(src));
	return (0);
}
