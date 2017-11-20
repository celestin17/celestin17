/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:52:00 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/22 14:00:33 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void pgcd(int a, int b)
{
	int pgcd;

	pgcd = a;
	while (!(a % pgcd == 0 && b % pgcd == 0))
		pgcd--;
	printf("%d", pgcd);
}
int		main(int argc, char **argv)
{

	pgcd(atoi(argv[1]), atoi(argv[2]));

	return(0);
}
