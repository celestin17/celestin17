/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 11:53:17 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/22 14:03:55 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main(void)
{
	int lettre;

	lettre = 0;
	while (lettre < 26)
	{
		if (lettre % 2 == 0)
			ft_putchar(lettre + 97);
		else
			ft_putchar(lettre + 65);
	lettre++;
	}
	return(0);
}
