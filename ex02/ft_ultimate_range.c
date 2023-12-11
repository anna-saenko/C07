/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate.range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:59:15 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/09 16:12:40 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}

	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!*range)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	res;
	int *range;
	int i;

	range = NULL;
	res = ft_ultimate_range(&range, 5, 15);
	i = 0;
	printf("Size of array - %d, elements:\n", res);

	if (range)
	{
		while(i < res)
		{
			printf(" - %d: %d\n", i, range[i]);
			++i;
		}
		printf("\n");
		free(range);
	}
} */