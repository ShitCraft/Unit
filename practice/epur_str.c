#include <unistd.h>
#define TAB(x) (x == ' ' || x == '\t' || x == '\v' || x == '\f' || x == '\r')

int		main(int args, char **argv)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		while (TAB(argv[1][i]))
		i++;
		while (!TAB(argv[1][i]) && (argv[1][i] != '\0'))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		if (argv[1][i] != '\0')
			write(1, " ", 1);
	}
	return (0);
}