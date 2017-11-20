/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:05:58 by cprudhom          #+#    #+#             */
/*   Updated: 2016/09/22 20:18:04 by cprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int negative;
	int num;

	i = 0;
	negative = 0;
	num = 0;
	while(str[i] == ' ' || str[i] =='\t')
		i++;
	if (str[i] == '-')
		negative == 1;
	if(str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		num = num * 10;
		num = num + (int)str[i] - 48;
	i++;
	}
	if (negative == 1)
		return (-numb);
	else 
		return (numb);
}
