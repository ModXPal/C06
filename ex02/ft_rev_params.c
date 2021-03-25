/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:03:40 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/23 16:08:32 by rcollas          ###   ########.fr       */
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

int		ft_strlen(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int av_len;

	av_len = ft_strlen(argv) - 1;
	if (argc == 0)
		return (0);
	while (av_len > 0)
	{
		ft_putstr(argv[av_len--]);
		ft_putstr("\n");
	}
}
