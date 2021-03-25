/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:58:51 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/23 16:02:52 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 0)
		return (0);
	while (argv[++i])
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
}
