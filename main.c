/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 21:59:56 by jcoy              #+#    #+#             */
/*   Updated: 2017/01/22 21:59:56 by jcoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"
#include "check.h"
#include "print.h"
#include "solve.h"
#include "validate.h"

int		main(int argc, char **argv)
{
	char	*arr[9];
	int		i;

	i = -1;
	if (validate(argc, argv) != 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (++i < 9)
	{
		arr[i] = (char*)malloc(sizeof(char) * 9);
	}
	fill(arr, argv);
	if (solve(arr, 0, 0))
	{
		print(arr);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
