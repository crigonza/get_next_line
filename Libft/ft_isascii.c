/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:37:59 by crigonza          #+#    #+#             */
/*   Updated: 2022/04/19 18:17:17 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

int	ft_isascii(int c)
{
	if (c >= '0' && c <= '127')
		return (1);
	else
		return (0);
}
