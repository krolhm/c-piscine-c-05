/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 16:48:02 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/05 11:57:17 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		return (0);
	if (nb < 0)
		nb = -nb;
	while (i <= 46340 && (i * i) < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
