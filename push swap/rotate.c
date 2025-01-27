/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 07:56:44 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/27 04:50:35 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(stack **ab)
{
	stack	*tmp;

	if (ft_lstsize(*ab) <= 1)
		return ;
	tmp = (*ab);
	(*ab) = (*ab)->next;
	tmp->next = NULL;
	ft_lstadd_back(ab, tmp);
}

void	ra(stack **a)
{
	write (1, "ra\n", 3);
	rotate(a);
}

void	rb(stack **b)
{
	write (1, "rb\n", 3);
	rotate(b);
}

void	rr(stack **a, stack **b)
{
	write (1, "rr\n", 3);
	rotate(a);
	rotate(b);
}