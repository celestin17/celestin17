/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 23:25:00 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/21 19:04:58 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_word(char *str)
{
	int i;

	i = 0;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] && (str[i] != '\t' && str[i] != ' '))
	{
		ft_putchar(str[i]);
		i++;
	}
}
int		main(int argc,char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_word(argv[1]);
	}
	return(0);
}


