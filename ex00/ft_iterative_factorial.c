/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 15:04:49 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/02 15:23:05 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	result;

	if (nb < 0)
		return (0);
	n = 1;
	result = 1;
	while (n <= nb)
	{
		result = n * result;
		n++;
	}
	return (result);
}
