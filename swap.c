/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 07:46:00 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/27 00:03:54 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(stack **ab)
{
	int	tmp;

	if (!(*ab) || !(*ab)->next)
		return ;
	tmp = (*ab)->content;
	(*ab)->content = (*ab)->next->content;
	(*ab)->next->content = tmp;
	tmp = (*ab)->index;
	(*ab)->index = (*ab)->next->index;
	(*ab)->next->index = tmp;
}

void	sa(stack **a)
{
	write (1,"sa\n",3);
	swap(a);
}

void	sb(stack **b)
{
	write (1,"sb\n",3);
	swap(b);
}
