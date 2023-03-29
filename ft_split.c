/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikim <shikim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:01:58 by shikim            #+#    #+#             */
/*   Updated: 2023/03/29 16:25:42 by shikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

static size_t	count_str(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	count_len_str(char const *s, char c, char **splited_strs)
{
	size_t	len_str;
	size_t	i;

	len_str = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			*splited_strs = (char *)malloc(len_str + 1);
			len_str = 0;
			*splited_strs[len_str] = '\0';
			splited_strs++;
		}
		else if (s[i] != c)
			len_str++;
		i++;
	}
}

static void	copy_str(const char *s, char **splited_strs, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (splited_strs[j] != 0)
	{
		while (splited_strs[j][k] != '\0')
		{
			if (s[i] != c)
			{
				splited_strs[j][k] = s[i];
				printf("s[i]: %c\n", splited_strs[j][k]);
				k++;
			}
			i++;
		}
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splited_strs;
	size_t	num_str;

	num_str = count_str(s, c);
	splited_strs = (char **)malloc(sizeof(char *) * (num_str + 1));
	splited_strs[num_str] = 0;
	if (splited_strs == 0)
		return (0);
	count_len_str(s, c, splited_strs);
	copy_str(s, splited_strs, c);
	return (splited_strs);
}
