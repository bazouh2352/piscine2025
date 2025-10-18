CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ./

all: final

final:
	$(CC) $(SRC)ft*.c main.c -o final;

main.o: main.c
	$(CC) $(CFLAGS) main.c -c

clean:
	rm -rf $(SRC)*.o
	
fclean:
	rm -rf $(SRC)*.o final a.out

re:	fclean final