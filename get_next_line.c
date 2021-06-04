#include "libft.h"

static	int	check_initial_conditions(int fd, char ***line, char **static_array)
{
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
	{
		free(*static_array);
		return (-1);
	}
	if (!*t)
		*static_array = ft_calloc(1, sizeof(char));
	return (1);
}

static	int	copy_array(char *static_array, char ***line, int out)
{
	if (out == 0)
		**line = ft_strdup(static_array);
	else if (out > 0)
		**line = ft_substr(static_array, 0, \
			(ft_strchr(static_array, '\n') - static_array));
	return (out);
}

static	char	new_tmp_array(char *static_array, char **line, int out)
{
	char	*tmp;

	if (out > 0)
		tmp = ft_strdup(static_array + (ft_strlen(*line) + 1));
	else
		tmp = ft_strdup(static_array + (ft_strlen(*line)));
	return (tmp);
}

int	get_next_line(int fd, char **line)
{
	int				out;
	char			buf_read[BUFFER_SIZE];
	char			*tmp;
	static char		*static_array;

	if (check_initial_conditions(fd, &line, &static_array) == -1)
		return (-1);
	out = read(fd, buf_read, BUFFER_SIZE);
	while (!ft_strchr(static_array, '\n') && out > 0)
	{
		s[out] = '\0';
		tmp = ft_strjoin(static_array, buf_read);
		ft_memdel((void **)&static_array);
		static_array = tmp;
		out = read(fd, buf_read, BUFFER_SIZE);
	}
	if (copy_array(static_array, &line, out) == -1)
		return (-1);
	tmp = new_temp_array(static_array, line);
	ft_memdel((void **)&static_array);
	static_array = tmp;
	if (out == 0)
		return (0 * ft_memdel((void **)&static_array));
	return (1);
}
