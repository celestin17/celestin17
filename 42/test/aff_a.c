/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 21:19:49 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/16 13:05:48 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int finda;

	i =0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
	return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
			finda = 1;
	i++;
	}
	if (finda == 1)
	{
		write (1, "a\n", 2);
	}
	else
		write(1, "\n", 1);
	return (0);
}
