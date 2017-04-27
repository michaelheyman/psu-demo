CC = g++
CPPFLAGS = -Wall -g -std=c++11
OBJS = main.o supplied.o list.o

all:		$(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o app

main.o:		main.cpp
		$(CC) $(CPPFLAGS) -c main.cpp

list.o:		list.cpp
		$(CC) $(CPPFLAGS) -c list.cpp

clean:
		rm main.o
		rm app
		rm list.o
