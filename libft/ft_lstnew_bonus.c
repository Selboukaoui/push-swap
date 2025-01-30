/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:35:54 by selbouka          #+#    #+#             */
/*   Updated: 2025/01/25 16:53:15 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

stack	*ft_lstnew(int content)
{
	stack	*p;

	p = malloc(sizeof(stack));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}
