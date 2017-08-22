/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 20:09:48 by ymiao             #+#    #+#             */
/*   Updated: 2017/01/22 20:09:49 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		validate(int argc, char **argv)
{
	int x;
	int y;
	int count;

	x = 1;
	if (argc != 10)
		return (0);
	while (++x < argc)
	{
		count = 0;
		y = -1;
		while (argv[x][++y] != '\0')
		{
			if (!(argv[x][y] == '.'
			|| (argv[x][y] >= '1' && argv[x][y] <= '9')))
				return (0);
			count++;
		}
	}
	if (count != 9)
		return (0);
	return (1);
}
