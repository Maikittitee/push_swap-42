/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_push_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/20 15:06:20 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **a, t_stack **b)
{
	if (stack_size(*a) == 2)
		ft_sa(a);
	else if (stack_size(*a) == 3)
		sort_3(a);
	else if (stack_size(*a) == 5)
		sort_5(a, b);
	else
		radix_sort(a, b);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**argument;
	int		i;

	i = 0;
	if (ac < 2)
		return (0);
	check_av(av);
	argument = ft_ultimate_split(av, ' ');
	check_before_stack(argument);
	a = NULL;
	b = NULL;
	init_stack(&a, argument, ultimate_count_word(av, ' '));
	put_index(a);
	if (!is_sort(a))
		ft_sort(&a, &b);
	ft_double_free(argument);
	ft_freestack(&a);
	return (0);
}
