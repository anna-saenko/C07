/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:57:26 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/09 15:19:02 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	dup = ft_strcpy(dup, src);
	return (dup);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str;

	str = ft_strdup("hello uytfyrc7tesr 875fyu uyr u00 0");
	printf("%s\n", str);
	free(str);
} */