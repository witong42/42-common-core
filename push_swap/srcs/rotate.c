/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <witong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 08:36:56 by witong            #+#    #+#             */
/*   Updated: 2024/10/17 11:43:58 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	*stack = first->next;
	last->next = first;
	first->next = NULL;
}
void	ra(t_stack **a)
{
	rotate(a);
	ft_putstr_fd("ra\n", 1);
}
void	rb(t_stack **b)
{
	rotate(b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_putstr_fd("rr\n", 1);
}
