CC=gcc
CFLAGS=-Wall -Wextra

app: main.o hello.o
	$(CC) $(CFLAGS) $^ -o $@
clean:
rm -f app main *.o