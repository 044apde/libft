/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikim <shikim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:54:13 by shikim            #+#    #+#             */
/*   Updated: 2023/04/01 18:56:54 by shikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_putstr_fd(char *s, int fd) {
  int len_s;

  len_s = ft_strlen(s);
  while (len_s-- > 0) write(fd, s++, 1);
}