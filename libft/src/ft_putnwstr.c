/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahmed <hahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 12:57:25 by hahmed            #+#    #+#             */
/*   Updated: 2018/04/16 13:00:24 by hahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnwstr(wchar_t *s, int n)
{
	while (*s && n > 0)
	{
		ft_putwchar(*s);
		n -= ft_wcharlen(*s);
		s++;
	}
}
