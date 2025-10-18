# "Ce Makefile est signe de commencement et de fin, ainsi que l'oeuvre d'un grand dieu en plein essor, Thor, 
# et j'en suis le temoin", me permettais-je d'ecrire assis a ma chaise la tete pleine de mythologie.

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ./

all : final

clean:
	rm -rf $(SRC)*.o
fclean:
	rm -rf $(SRC)*.o final

ft_isalpha.o: ft_isalpha.c
	$(CC) $(CFLAGS) -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c
	$(CC) $(CFLAGS) -c ft_isalnum.c

ft_isascii.o: ft_isascii.c
	$(CC) $(CFLAGS) -c ft_isascii.c

ft_isprint.o: ft_isprint.c
	$(CC) $(CFLAGS) -c ft_isprint.c

ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) -c ft_strlen.c

ft_toupper.o: ft_toupper.c
	$(CC) $(CFLAGS) -c ft_toupper.c

ft_tolower.o: ft_tolower.c
	$(CC) $(CFLAGS) -c ft_tolower.c

