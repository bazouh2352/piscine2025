#ifndef FUNCTIONS_H

#define FUNCTIONS_H

#include <stdio.h>
#include <stdbool.h>

short	file_exists(const char* filename);

bool	makefile_gen(FILE *fptr, char *src);
void	makefile_gen_obj(FILE *fptr, char *filename);
void	makefile_bfunctions(FILE *fptr);

#endif

