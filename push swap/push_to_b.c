/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 03:51:02 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/20 03:54:55 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_b(stack *list)
{
	int	i;
	stack *tmp;

	i = 0;
	tmp = list;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	while ((i - 3) > 0)
	{
		pb(list);
		list = list->next;
		i--;
	}
} 