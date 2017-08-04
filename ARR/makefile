CC = g++
CPPFLAGS = -Wall -g -std=c++11
OBJS = main.o supplied.o arr.o

all:		$(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o app

main.o:		main.cpp
		$(CC) $(CPPFLAGS) -c main.cpp

arr.o:		arr.cpp
		$(CC) $(CPPFLAGS) -c arr.cpp

clean:
		rm main.o
		rm arr.o
		rm app
