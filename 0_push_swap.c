/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_push_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/11 00:08:14 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// TODO : CLEAN EVERY FILE -> 5 declear, 25 per line

void	ft_sort(t_stack **a, t_stack **b)
{
	if (stack_size(*a)== 2)
		ft_sa(a);
	else if (stack_size(*a) == 3)
		sort_3(a, b);
	else if (stack_size(*a) == 5)
		sort_5(a, b);
	else {
		radix_sort(a, b);
	}	
}


int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
	char **argument;
	int	i;

	i = 0;
	if (ac < 2)
		return (0);
	while (av[i])
	{
		if (!av[i][0])
		{
			ft_putendl_fd("Error",2);
			return (0);
		}
		i++;
	}
	argument = ft_ultimate_split(av, ' ');

	check_err(argument);

	a = NULL;
	b = NULL;
	init_stack(&a, argument, ac);
	ft_double_free(argument);
	put_index(a);
	if (!is_sort(a))
		ft_sort(&a, &b);
	ft_freestack(&a);
    return (0);
}