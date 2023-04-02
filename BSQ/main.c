/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:00:47 by gabrodri          #+#    #+#             */
/*   Updated: 2023/03/27 22:00:49 by gabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/bsq.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if ((ft_verif_map(argv[i])) != 1)
				ft_print_solution(i, argv);
			i++;
		}
	}
	else
	{
		read_stdin();
		return (0);
	}
}

int	read_stdin(void)
{
	int		fd;
	char	buf[8192];
	int		ret;
	char	str[11];

	ft_strcpy(str, "newmap.txt");
	fd = open(str, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (0);
	ret = read(0, buf, 8192);
	while (ret)
	{
		write(fd, buf, ret);
		if (ret == 1 && buf[0] == '\n')
			break ;
		ret = read(0, buf, 8192);
	}
	close(fd);
	if ((ft_verif_map2(str)) != 1)
		ft_new_solution(str);
	return (1);
}

char	**ft_fill_map(char **map, int c, int l, char *argv)
{
	int		i;
	int		j;
	int		pos;
	char	o;
	char	p;

	o = get_obst(argv);
	p = get_full(argv);
	pos = ft_find_position_square(map, c, l, o);
	i = (pos / (c - 1)) - ft_biggest_square(map, c, l, o) + 1;
	while (i < (pos / (c - 1)) + 1)
	{
		j = (pos % (c -1)) - ft_biggest_square(map, c, l, o) + 1;
		while (j < (pos % (c -1)) + 1)
		{
			map[i][j] = p;
			j++;
		}
		i++;
	}
	return (map);
}

void	ft_print_solution(int i, char **argv)
{
	int		fd;
	int		j;
	char	**map;

	j = 0;
	fd = open (argv[i], O_RDONLY);
	if (fd >= 0)
		map = ft_read_file(argv[i]);
	ft_fill_map(map, col_nbr(argv[i]),
		row_nbr(argv[i]), argv[i]);
	while (j < row_nbr(argv[i]))
	{
		ft_putstr(map[j]);
		ft_putchar('\n');
		j++;
	}
	free(map);
	close (fd);
}

void	ft_new_solution(char *argv)
{
	int		fd;
	int		j;
	char	**map;

	j = 0;
	fd = open (argv, O_RDONLY);
	if (fd >= 0)
		map = ft_read_file(argv);
	ft_fill_map(map, col_nbr(argv),
		row_nbr(argv), argv);
	while (j < row_nbr(argv))
	{
		ft_putstr(map[j]);
		ft_putchar('\n');
		j++;
	}
	free(map);
	close (fd);
}
