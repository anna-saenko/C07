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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min <= max)
	{
		return (0);
	}	
	range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (i);
}
