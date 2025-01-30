/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:06:16 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/28 03:26:59 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void err(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

// void lk(void)
// {
//     system("leaks push_swap");
// }

// void free_stack(stack **s) {
//   stack *tmp;
//   if (!s || !*s) return; // Guard against invalid input
//   while (*s) {
//     tmp = (*s)->next;
//     free(*s);
//     *s = tmp;
//   }
//   *s = NULL; // Set the pointer to NULL after freeing
// }
int main(int ac, char **av)
{
	stack *stack_a;
	stack *stack_b;

	// atexit(lk);
	stack_a = NULL;	
	stack_b = NULL;	
	if (ac == 1) 
		return (0);
	av = check_av(ac, av);
	if (is_sorted(av) == 1)
		return(0);
	stack_a =  add_args_to_a(av, &stack_a);
	get_index(&stack_a); 
	sorting(&stack_a, &stack_b);	
	printf ("\n\n------------\n");
	while (stack_a)
	{
		printf("content = %d  index  =%d \n",stack_a->content, stack_a->index);
		stack_a = stack_a->next;
	}
// 	free_stack(&stack_a);
// 	free_stack(&stack_b);
}

