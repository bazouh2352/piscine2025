#include <stdio.h>

int main(void)
{
	int prout = 5;
	void * prouprout = &prout;
	printf("%s", (char *) prouprout);
}