/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:48:21 by mcomet            #+#    #+#             */
/*   Updated: 2019/04/04 18:43:30 by mcomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(char *file)
{
	int		f;
	char	c;

	f = open(file, O_RDONLY);
	if (f < 0)
		return ;
	while (read(f, &c, 1))
		write(1, &c, 1);
	close(f);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display_file(argv[1]);
	return (0);
}
