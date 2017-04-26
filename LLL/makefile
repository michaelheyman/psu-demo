CC = g++
CPPFLAGS = -Wall -g -std=c++11
OBJS = main.o supplied.o

all:		$(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o app

main.o:		main.cpp
		$(CC) $(CPPFLAGS) -c main.cpp

clean:
		rm main.o
		rm app
