/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:09:35 by mcomet            #+#    #+#             */
/*   Updated: 2019/04/04 17:46:13 by mcomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_sort_params(char **param, int nb)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < (nb - 1))
	{
		j = 0;
		while (param[i][j] == param[i + 1][j])
			j++;
		if (param[i][j] > param[i + 1][j])
		{
			tmp = param[i];
			param[i] = param[i + 1];
			param[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}

void	ft_print_params(char **param, int nb)
{
	int		i;
	int		j;

	if (nb > 1)
	{
		i = 1;
		while (i < nb)
		{
			j = 0;
			while (param[i][j] != '\0')
			{
				ft_putchar(param[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	ft_sort_params(argv, argc);
	ft_print_params(argv, argc);
	return (0);
}
