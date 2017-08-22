/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 23:13:42 by ymiao             #+#    #+#             */
/*   Updated: 2017/01/21 23:13:43 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int		solve(char **arr, int i, int j);

int		check(char **arr, int i, int j)
{
	char k;

	k = '0';
	while (++k <= '9')
	{
		if (is_open(arr, i, j, k))
		{
			arr[i][j] = k;
			if ((j + 1) < 9)
			{
				if (solve(arr, i, j + 1))
					return (1);
				arr[i][j] = '.';
			}
			else if ((i + 1) < 9)
			{
				if (solve(arr, i + 1, 0))
					return (1);
				arr[i][j] = '.';
			}
			else
				return (1);
		}
	}
	return (0);
}

int		solve(char **arr, int i, int j)
{
	if (i < 9 && j < 9)
	{
		if (arr[i][j] != '.')
		{
			if ((j + 1) < 9)
				return (solve(arr, i, j + 1));
			else if ((i + 1) < 9)
				return (solve(arr, i + 1, 0));
			else
				return (1);
		}
		if (check(arr, i, j))
			return (1);
		return (0);
	}
	return (1);
}
