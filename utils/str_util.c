/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:27:31 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/25 13:32:11 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char e)
{
	write(1, &e, 1);
}

void	put_str(char *e)
{
	int i;

	i = 0;
	while (e[i])
		put_char(e[i++]);
}

