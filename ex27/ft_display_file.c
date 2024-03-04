/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:05:36 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/10 19:47:23 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		file;
	char	buf[1];

	if (argc == 1)
		write (1, "File name missing.\n", 19);
	else if (argc > 2)
		write (1, "Too many arguments.\n", 20);
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file == -1)
			write (1, "Cannot read file.\n", 18);
		else
		{
			while (read(file, buf, 1))
				write(1, buf, 1);
			close(file);
		}
	}
	return (0);
}
