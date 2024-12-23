/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 02:07:56 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/07 22:30:22 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (c > 255)
		c = c % 256;
	while (s[i])
	{
		if (s[i] == c)
			return (s = &s[i]);
		i++;
	}
	if (c == 0)
		return (s = &s[i]);
	return (0);
}
