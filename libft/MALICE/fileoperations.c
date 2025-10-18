#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <dirent.h>

bool	file_exists(const char* filename)
{
	FILE *f = fopen(filename, "r");
	if (f == NULL)
	{
		return (false);
	}
	fclose(f);
	return (true);
}

void	makefile_gen_obj(FILE *fptr, char *filename)
{
	char *cpy = strdup(filename);
	char *ptr= strrchr(cpy, '.');
	ptr[0] = 0;
	fprintf(fptr, "%s.o: %s.c\n", cpy, cpy);
	fprintf(fptr, "\t$(CC) $(CFLAGS) -c %s.c\n\n", cpy);
}

bool	makefile_gen(FILE *fptr, char *src)
{
	DIR *d;
	struct dirent	*dir;

	d = opendir(src);
	if (d)
	{
		while ((dir = readdir(d)) != NULL)
		{
			if (!strncmp(dir->d_name, "ft_", 3))
				makefile_gen_obj(fptr, dir->d_name);
		}
		closedir(d);
		return (1);
	}
	return (0);
}


void	makefile_bfunctions(FILE *fptr)
{
	fprintf(fptr, "CC = cc\n");
	fprintf(fptr, "CFLAGS = -Wall -Wextra -Werror\n");
	fprintf(fptr, "SRC = ../\n\n");
	fprintf(fptr, "all : final\n\n");
	fprintf(fptr, "clean:\n\trm -rf $(SRC)*.o\n");
	fprintf(fptr, "fclean:\n\trm -rf $(SRC)*.o final\n\n");
}
