/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_av.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:58:45 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/22 16:02:13 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// check duplicated numbers 
// check 00000
// check if there a sign is necessary to be befor a number
// thre just numbers and sign

int	check_dup(char *av)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (av[i])
	{
		j = 0;
		check = 0;

		if (digit(av[i]))
		{
			while (av[j])
			{
				if (av[i] == av[j])
					check++;
				j++;
			}
			if (check == 2)
				return (0);
		}
		i++;
	}
}

int	check_zero(char *av)
{
	
}

int	check_sign(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i] == '-' || av[i] == '+')
		{
			if (digit(av[i + 1]) == 0)
				return (0);
		}
		i++;
	}
	return (1);
}

int	check_av(char **av)
{
	int	i;

	i = 0;
	if (!av)
		return(0);
	while (av[i])
	{
		if (!check_sign(av[i])||!check_dup(av[i])||!check_zero(av[i]))
			return(0);
		i++;
	}
	
}