#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		get_next_line(int fd, char **line);

typedef struct	t_fd
{
	int	fd1;
	int	fd2;
}				s_fd;

s_fd	*ft_open(void)
{
	s_fd	*fds;

	fds = calloc(1, sizeof(s_fd));
	fds->fd1 = open("StarWars2.txt", O_RDONLY);
	if (fds->fd1 == -1)
		printf("open() failed : %d\n", fds->fd1);
	else
		printf("open StarWars2.txt : %d\n", fds->fd1);
		
	fds->fd2 = open("StarWars3.txt", O_RDONLY);
	if (fds->fd2 == -1)
		printf("open() failed : %d\n", fds->fd2);
	else
		printf("open StarWras3.txt : %d\n", fds->fd2);
	return (fds);
}

void	*ft_close(s_fd *fds)
{
	close(fds->fd1);
	if (fds->fd1 == -1)
		printf("close() failed\n");
	else
		printf("close() worked\n");
	close(fds->fd2);
	if (fds->fd2 == -1)
		printf("close() failed\n");
	else
		printf("close() worked\n");
}

int	main()
{
	s_fd	*fds;
	int		ret;
	char	*line;
	char	buf[BUFFER_SIZE + 1];

	line = NULL;
	fds = ft_open();
	ret = get_next_line(fds->fd1, &line);
	printf("next line : %d\n", ret);
	ft_close(fds);

	return (0);
}
