/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:26:38 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/10 14:08:57 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	d;
	int	i;

	d = 1;
	i = 0;
	while (d < argc)
	{
		while (argv[d][i] != '\0')
		{
			ft_putchar(argv[d][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		d++;
	}
	return (0);
}
