/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 12:37:17 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/20 14:51:34 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}
void	ft_rev(int i, char *str)
{
	while(i >= 0)
	{
		ft_putchar(str[i]);
	i--;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		ft_rev(ft_strlen(argv[i]),argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
