/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:31:01 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/10 15:12:50 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char **str, int c)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] && i < c - 1)
	{
		a = 0;
		while (str[i][a])
		{
			ft_putchar(str[i][a]);
			a++;
		}
		if (i < c)
			ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		c;
	char	*s;

	c = argc;
	i = 1;
	while (i < argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				s = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = s;
			}
			i++;
		}
		i = 1;
		argc--;
	}
	ft_putstr(&argv[i], c);
	return (0);
}
