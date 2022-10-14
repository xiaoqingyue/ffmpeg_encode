CC = g++
LD = g++

SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %c, %o, $(SRCS))

TARGET = main

.PHONY:all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(LD) $^ -g -o $@ `pkg-config --cflags --libs opencv` -std=c++11 -I/usr/local/include -L/usr/local/lib  -lavformat -lavcodec -lavutil  -lswresample -lswscale 
  

%o:%c
	$(CC) -cpp $^

clean:
	rm -f $(OBJS) $(TARGET)
