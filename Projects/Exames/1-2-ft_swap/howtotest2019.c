/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 13:47:19 by albarret          #+#    #+#             */
/*   Updated: 2019/01/20 14:02:54 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
	printf("%d", *a);
	printf("%d", *b);
}

int		main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;

	ft_swap(&a, &b);
	return (0);
}
