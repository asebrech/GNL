/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:06:32 by asebrech          #+#    #+#             */
/*   Updated: 2021/04/09 15:51:38 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define BUFFER_SIZE 4096

int	get_next_line(int fd, char **line)
{
	int		ret;
	char	buf[BUFFER_SIZE + 1];

	ret = read(fd, buf, BUFFER_SIZE);
	buf[ret] = '\0';
	return (ret);
}
