/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:38:24 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/25 13:40:00 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int str_len(char *e)
{
	int index;

	index = 0;
	while (e[index])
		index++;
	return index;
}