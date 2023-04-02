/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:00:56 by gabrodri          #+#    #+#             */
/*   Updated: 2023/03/28 21:00:58 by gabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/bsq.h"

int	ft_verif_chars(char *argv)
{
	int		fd;
	char	c;

	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	while (read(fd, &c, 1) > 0)
	{
		if (c != get_void(argv)
			&& c != get_obst(argv) && c != '\n')
			return (1);
	}
	close(fd);
	return (0);
}

int	ft_get_next_line(char *argv, int fd)
{
	char	*buf;
	int		j;
	int		size_file;

	j = 0;
	size_file = ft_size_file(argv);
	buf = malloc(size_file * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[j], 1))
	{
		if (buf[j] == '\n')
		{
			if (j == 0)
				j++;
			break ;
		}
		j++;
	}
	free (buf);
	return (j + 1);
}

int	ft_verif_columns(char *argv)
{
	int	i;
	int	fd;
	int	j;
	int	c;
	int	l;

	i = 0;
	j = 0;
	c = col_nbr(argv);
	l = row_nbr(argv);
	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	while (i < l)
	{
		j = ft_get_next_line(argv, fd);
		if (j != c)
			return (1);
		i++;
	}
	if (ft_get_next_line(argv, fd) > 1)
		return (1);
	close(fd);
	return (0);
}

int	ft_verif_returns(char *argv)
{
	char	*buf;
	int		fd;
	int		size_file;
	int		ret;
	int		c;

	ret = 0;
	c = col_nbr(argv);
	size_file = ft_size_file(argv);
	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	buf = malloc(size_file * sizeof(char));
	ret = read(fd, buf, c);
	if (buf == NULL)
		return (0);
	while (!ret)
	{
		if (buf[ret - 1] != '\n')
			return (1);
	}
	free(buf);
	close(fd);
	return (0);
}

int	ft_verif_map(char *argv)
{
	if (get_void(argv) == get_obst(argv) || get_void(argv) == get_full(argv)
		|| get_obst(argv) == get_full(argv))
	{
		ft_putstr("map error\n");
		return (1);
	}
	if (col_nbr(argv) < 1 || row_nbr(argv) < 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	if (ft_verif_chars(argv) == 1 || ft_verif_returns(argv) == 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	if (ft_verif_columns(argv) == 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	return (0);
}
