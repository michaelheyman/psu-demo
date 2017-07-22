CC = g++
CPPFLAGS = -Wall -g -std=c++11
OBJS = main.o dlist.o supplied.o

all:		$(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o app

main.o:		main.cpp
		$(CC) $(CPPFLAGS) -c main.cpp

dlist.o:	dlist.cpp
		$(CC) $(CPPFLAGS) -c dlist.cpp

clean:
		rm main.o
		rm dlist.o
		rm app
