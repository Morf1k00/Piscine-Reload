/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:41:23 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/13 11:10:21 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		s;

	i = 0;
	s = 0;
	while (str[s] != '\0')
		s++;
	copy = malloc(sizeof(char) * (s + 1));
	if (!copy)
		return (0);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// copy = (char *)malloc(sizeof(ft_strlen(src) + 1));
// int main(int argc, char **argv)
// {
// 	char *line;
// 	char *copy;
// 	(void)argc;
// 	line = argv[1];
// 	copy = ft_strdup(line);
// 	printf("%s", copy);
// 	free(copy);
// }