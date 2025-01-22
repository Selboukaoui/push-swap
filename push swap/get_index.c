/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:21:00 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/20 02:33:06 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(stack *list)
{
	stack	*tmp;
	stack	*tmp2;
	int		i;

	if (!list)
		exit(1);
	tmp = list;
	i = 0;
	while (tmp)
	{
		tmp2 = list;
		i = 1;
		while (tmp2)
		{
			if (tmp->value > tmp2->value)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index = i;
		tmp = tmp->next;
	}
}
