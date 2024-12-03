# defining macros
SOURCES = $(wildcard *.c)
OBJS = $(SOURCES:%.c = %.o)
OB = $(wildcard *.o)

TARGET = main

.PHONY : all
all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

#OBJS = main.o EkinCoolFunction.o EkinCoolerFunction.o
CC = gcc
CFLAGS = -Wall -Werror -std=c11

# target for the executable image
#a.out : main.o EkinCoolFunction.o EkinCoolerFunction.o
#run : $(OBJS)
#	$(CC) $(OBJS) -o $@
#cc main.o EkinCoolFunction.o EkinCoolerFunction.o

#main.o : main.c
#	$(CC) $(CFLAGS) $^
#cc -c -g -Wall -Werror -std=c11 main.c

#EkinCoolFunction.o : EkinCoolFunction.c
#	$(CC) $(CFLAGS) EkinCoolFunction.c
#cc -c -g -Wall -Werror -std=c11 EkinCoolFunction.c

#EkinCoolerFunction.o : EkinCoolerFunction.c
#	$(CC) $(CFLAGS) EkinCoolerFunction.c 	
#cc -c -g -Wall -Werror -std=c11 EkinCoolerFunction.c

#%.o : %.c
#	$(CC) $(CFLAGS) $^
.PHONY : clean
clean :
	rm main
	rm $(OB)