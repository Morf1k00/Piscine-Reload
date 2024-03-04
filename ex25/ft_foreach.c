/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:45:04 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/09 13:36:36 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int main()
// {
// 	int array[];
// 	int lenght;

// 	array[] = {1, 2, 3, 4, 5};
// 	lenght = sizeof(array) / sezeof(array[0]);
// 	ft_foreach(array,lenght);
// }