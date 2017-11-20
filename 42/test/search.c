/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:01:31 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/22 15:58:25 by cprudhom         ###   ########.fr       */
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
	while(str[i])
		i++;
	return(i);
}
void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
	i++;
	}
}
void	ft_search(char *str, char a, char b)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if (str[i] == a)
			str[i] = b;
	i++;
	}
	ft_putstr(str);
}
int  main(int argc,  char **argv)
{
	int i;

	i = 0;
	if(!(argc == 4 && (ft_strlen(argv[2]) == 1) && (ft_strlen(argv[3]) == 1)))
		ft_putchar('\n');
	else
	{
		ft_search(argv[1], argv[2][0], argv[3][0]);
		ft_putchar('\n');
	}
	return 0;
}
