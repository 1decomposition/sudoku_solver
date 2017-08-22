/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 22:04:15 by ymiao             #+#    #+#             */
/*   Updated: 2017/01/21 22:04:16 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_open(char *arr[], int i, int j, char num)
{
	int row_start;
	int col_start;
	int a;

	row_start = (i / 3) * 3;
	col_start = (j / 3) * 3;
	a = 0;
	while (a < 9)
	{
		if (arr[i][a] == num || arr[a][j] == num
			|| arr[row_start + (a % 3)][col_start + (a / 3)] == num)
			return (0);
		a++;
	}
	return (1);
}
