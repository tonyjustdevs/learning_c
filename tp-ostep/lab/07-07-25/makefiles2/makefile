# 'make' program helps automate build process

# hw: hw.o helper.o # create hw from .o?
# 	gcc -o hw hw.o helper.o -lm

hello_program: doggo.o ducky.o helloworld.o kitty.o
	gcc -o hello_program doggo.o ducky.o helloworld.o kitty.o

doggo.o: doggo.c
	gcc -O -Wall -c doggo.c

ducky.o: ducky.c
	gcc -O -Wall -c ducky.c

helloworld.o: helloworld.c
	gcc -O -Wall -c helloworld.c

kitty.o: kitty.c
	gcc -O -Wall -c kitty.c

clean:
	rm -f doggo.o ducky.o helloworld.o kitty.o hello_program