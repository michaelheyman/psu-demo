CC = g++
CPPFLAGS = -Wall -g -std=c++11
OBJS = main.o supplied.o table.o

all:		$(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o app

main.o:		main.cpp
		$(CC) $(CPPFLAGS) -c main.cpp

table.o:	table.cpp
		$(CC) $(CPPFLAGS) -c table.cpp

clean:
		rm main.o
		rm table.o
		rm app
