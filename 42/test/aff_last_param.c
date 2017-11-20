/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 13:06:07 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/20 12:11:36 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
	return (0);
	}
	else
		ft_putstr(argv[argc -1]);
			return (0);
}
