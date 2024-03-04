/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:22:51 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/10 11:18:06 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = nb;
	if (fac < 0 || fac > 12)
		return (0);
	else if (fac == 1 || fac == 0)
		return (1);
	else
	{
		while (fac > 1)
		{
			fac--;
			nb *= fac;
		}
	}
	return (nb);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%i", ft_iterative_factorial(5));
// }