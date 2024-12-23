/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 05:22:41 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 22:28:04 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 48 && c <= 57)
		return (4);
	if (c >= 97 && c <= 122)
		return (2);
	return (0);
}
