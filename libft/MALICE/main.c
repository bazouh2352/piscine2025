#include "functions.h"
#include <stdio.h>
#include <string.h>

#define FILE_NAME "Makefile"
#define SRC ".."
#define CC "cc"
#define CFLAGS "-Wextra -Werror -Wall"

int main(int argc, char *argv)
{
		// Testing if file exists
	if (file_exists(FILE_NAME))
	{
		printf("%s already exists. Overwrite(y/n)? ", FILE_NAME);
		char answer[40];
		scanf("%s", answer);
		if (strcmp("y", answer))
		{
			if(strcmp("n", answer))
			{
				printf("Wrong input.");
			}
			printf("\nAborting.");
			return (0);
		}
	}

		// Generating Makefile
	FILE	*fptr;
	fptr = fopen(FILE_NAME, "w");
	fprintf(fptr, "# \"Ce Makefile est signe de commencement et de fin, ainsi que l'oeuvre d'un grand dieu en plein essor, Thor, \n# et j'en suis le temoin\", me permettais-je d'ecrire assis a ma chaise la tete pleine de mythologie.\n\n");
	makefile_bfunctions(fptr);
	if (makefile_gen(fptr, SRC))
		printf("Operation succeeded.");
	else
		printf("Operation failed.");
	fclose(fptr);
	return (0);
}
