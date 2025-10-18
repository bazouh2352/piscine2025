#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *tmp;

	i = 0;
	tmp = (unsigned char *) s;
	while(i < n)
	{
		tmp[i] = c;
		i++;
	}
	s = (void *) tmp;
	return (s);
}

int main() {

    char array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( char ) * 5;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    ft_memset( array, 10, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}