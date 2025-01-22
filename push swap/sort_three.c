/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 02:36:26 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/20 03:54:24 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void three_nbr_sort(stack *list)
{
	if (list->index == 3)
		ra(list);
	if (list->next->index == 3)
		rra(list);
	if (list->index > list->next->index)
		sa(list);
}

// void three_nbr_sort(stack *list)
// {
// 	if (list->value > list->next->value \
// 		&& list->next > list->next->next->value)		
// 	{
// 		ra(*list);
// 		if (list->value > list->next->value)
// 			sa(*list);
// 	}
// 	else if (list->value < list->next->value \
// 			&& list->value > list->next->next->value)
// 		rra();
// 	else if (list->value > list->next->value \
// 			&& list->value < list->next->next->value)
// 		sa();
// 	else if (list->index == 1 && list->next->value > \
// 		 	list->next->next->value)
// 	{
// 		rra();
// 		sa();
// 	}
// }