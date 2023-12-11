#include <stdlib.h>

int	ft_findlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	strs_len;
	int	sep_len;

	if (!size)
	{
		return (0);
	}
	i = 0;
	strs_len = 0;
	while(i < size)
	{
		j = 0;
		while (strs[i][j++])
		{
			strs_len++;
		}
		i++;
	}
	sep_len = 0;
	while (sep[sep_len++]);
	return (strs_len + (sep_len * (size - 1)) + 1);
}

int	ft_concat(char **target, char *source, int start_idx)
{
	int	i;

	i = 0;
	while (source[i])
	{
		(*target)[start_idx++] = source[i++];
	}
	return start_idx;
}

char	*ft_allocate_string(int size, char **strs, char *sep)
{
	char	*result;
	int	res_len;

	res_len = ft_findlen(size, strs, sep);
	result = malloc(sizeof(char) * res_len);
	if (!result || !size)
	{
		return (NULL);
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int	arr_i;
	int	res_i;

	result = ft_allocate_string(size, strs, sep);
	if (!result)
	{
		return (NULL);
	}
	arr_i = 0;
	res_i = 0;
	while (arr_i < size)
	{
		res_i = ft_concat(&result, strs[arr_i], res_i);
		if (arr_i < size - 1)
		{
			res_i = ft_concat(&result, sep, res_i);
		}
		arr_i++;
	}
	result[res_i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char *strs[] = {"Hello", "how", "are", "you"};

	char *sep = "+";
	char *res = ft_strjoin(sizeof(strs) / sizeof(*strs), strs, sep);
	printf("%s\n", res);
	free(res);
} */