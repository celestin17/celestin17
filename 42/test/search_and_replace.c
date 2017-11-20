/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 15:07:28 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/20 16:04:12 by cprudhom         ###   ########.fr       */
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
void	ft_replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
		{
			(str[i] = b);
		i++;
		}
	i++;
	}
	ft_putstr(str);
}
int main(int argc, char **argv)
{
	if (!(argc == 4 && (ft_strlen(argv[2]) == 1) && (ft_strlen(argv[3]) == 1)))
		ft_putchar('\n');
	else
	{
		ft_replace(argv[1], argv[2][0], argv[3][0]);
		ft_putchar('\n');
	}
	return(0);
}
