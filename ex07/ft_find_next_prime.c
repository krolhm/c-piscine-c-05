/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 17:08:57 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/05 14:20:11 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	nb_next;

	nb_next = nb + 1;
	if (ft_is_prime(nb) == 0)
	{
		while (ft_find_next_prime(nb_next) == 0)
			nb_next++;
		return (nb_next);
	}
	else
		return (nb);
}
