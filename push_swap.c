/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/02/24 20:40:10 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_push(t_stack **src, t_stack **dst)
{
	stack_add(dst, stack_pop(src));
}

void	ft_swap(t_stack **stack)
{
	t_stack *first;
	t_stack *second;
	t_stack *temp;

	first = *stack;
	second = (*stack)->lower;


	first->lower = second->lower;
	second->lower = first;

	*stack = second;
}

void	ft_rotate(t_stack **stack) // make top to low
{
	t_stack *top;
	t_stack *low;
	t_stack *curr;

	top = *stack;
	curr = *stack;
	*stack = (*stack)->lower;
	while (curr->lower != NULL)
		curr = curr->lower;
	low = curr;

	top->lower = NULL;
	low->lower = top;

}

void	ft_rev_rotate(t_stack **stack) //make low to top
{
	t_stack *top;
	t_stack *low;
	t_stack *before_low;
	t_stack *curr;

	top = *stack;
	curr = *stack;
	while (curr->lower != NULL)
	{
		before_low = curr;
		curr = curr->lower;
	}
	low = curr;

	low->lower = top;
	before_low->lower = NULL;

	*stack = low;
}

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	init_stack(&stack_a, av);
	display_stack(stack_a);
	ft_rev_rotate(&stack_a);
	ft_printf("------------------------------------------------------------\n");
	display_stack(stack_a);

    return (0);
}