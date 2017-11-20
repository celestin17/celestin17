/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 16:42:52 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/20 23:21:08 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
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
void	ft_change(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	ft_putstr(str);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
		ft_putchar('\n');
	else
		ft_change(argv[1]);
		ft_putchar('\n');

	return (0);
}
