/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:29:57 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/06 11:54:25 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 1)
		return (ft_recursive_power(nb, power - 1) * nb);
	if (power == 1)
		return (nb);
	return (1);
}
