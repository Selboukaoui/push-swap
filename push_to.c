/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:32:09 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/27 04:48:31 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(stack **to, stack **from)
{
	stack	*tmp;
	
	if (from == NULL)
		return ;
	tmp = *from;
	(*from) = (*from)->next;
	tmp->next = NULL;
	ft_lstadd_front(to, tmp);
}

void	pa(stack **a, stack **b)
{
	write(1,"pa\n",3);
	push(a, b);
}

void	pb(stack **a, stack **b)
{
	write(1,"pb\n",3);
	push(b, a);
}
