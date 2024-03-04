/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:45:38 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/10 15:18:08 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		d;
	int		*str;

	if (min >= max)
		return (NULL);
	str = malloc(sizeof(int) * (max - min + 1));
	if (!str)
		return (0);
	d = 0;
	while (min < max)
	{
		str[d] = min;
		d++;
		min++;
	}
	return (str);
}

// int main()
// {
// 	int a;
// 	int b;
// 	int *copy;
// 	int i;

// 	a = 10;
// 	b= 145;
// 	i = 0;

// 	copy = ft_range(a,b);
// 	while (i< b-a)
// 	{	
// 		printf("%d ", copy[i]);
// 		i++;
// 	}
// 	free(copy);
// }	
// copy = (char *)malloc(sizeof(ft_strlen(src) + 1));
// (void)argc;
	// int line;
	// line =  argv[1]