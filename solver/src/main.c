/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** solver main
*/

char **split(char *str, char c)
{
	char **ar;
	int len = 0;
        int j = 0;

        for (int i = 0; map->str[i]; i++)
                if (map->str[i] == c)
                        len++;
        ar = malloc(sizeof(char*) * (len + 2));
        if (!map->ar)
                return;
        map->ar[j++] = map->str;
        for (int i = 0; map->str[i]; i++) {
                if (map->str[i] == c && map->str[i + 1])
                        map->ar[j++] = map->str + i + 1;
        }
        map->ar[j] = NULL;
}

void p()
{
	
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (84);
	int fd = open(av[1]);
	if (fd == -1)
		return (84);
	char *str = fd.read();
	char **map = split(str, "\n");
	p();
}
