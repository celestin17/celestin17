/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_paramc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 21:44:49 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/22 14:27:07 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
	i++;
	}
}
int		 main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	else
		ft_putstr(argv[i + 1]);
		ft_putchar('\n');
	return (0);
}
