/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 16:16:50 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/22 14:03:25 by cprudhom         ###   ########.fr       */
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
void	ft_mirror(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = (110 + (13 - str[i] % 96));
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = (78 + (13 - str[i] % 64));
		}
	i++;
	}
}
int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
		ft_mirror(argv[1]);
		ft_putstr(argv[1]);
	return (0);
}
