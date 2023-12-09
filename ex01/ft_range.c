/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:57:58 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/09 15:49:40 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int	i;

	if (min <= max)
	{
		return(NULL);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
#include <stdio.h>
int	main(void)
{
	int *arr = ft_range(3, 10);
	int	i;

	i = 0;
	while(arr[i])
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
	
