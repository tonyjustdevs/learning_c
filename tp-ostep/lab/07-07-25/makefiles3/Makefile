# makefile v2
SRCS 	= hw.c helper.c	# 1. source files
TARG 	= hw			# 2. executable name
CC		= gcc 			# 3. compiler
OPTS	= -Wall -O		# 4. flags
LIBS	= -lm			# 5. libraries

OBJS = $(SRCS:.c=.o)	# 6. convert ".c" ---> ".o" files
all: $(TARG)			# 7. generate target ??
$(TARG): $(OBJS)		# 8. gen target exe
	$(CC) -o $(TARG) $(OBJS) $(LIBS)
&.o:%.c 				# 9. generic rule for .o files
	$(CC) $(OPTS) -c $< -o $@
clean:
	rm -f $(OBJS) $(TARG)

# og makefile
# hw: hw.o helper.o # create hw from .o?
# 	gcc -o hw hw.o helper.o -lm
# 
# hw.o: hw.c
# 	gcc -O -Wall -c hw.c
# 
# helper.o: helper.c
# 	gcc -O -Wall -c helper.c
# 
# clean:
# 	rm -f helper.o hw.o hw
