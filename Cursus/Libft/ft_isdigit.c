/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:12:09 by crigonza          #+#    #+#             */
/*   Updated: 2022/04/19 17:18:02 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

int	ft_isdigit(int c)
{
	if ( c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}