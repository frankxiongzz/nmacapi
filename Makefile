CC = gcc
CFLAGS  = -Wall -g
LIBS = -lpthread -lpcap -lnet
TARGET = launch
RM = rm -f
OBJS = nmac_api.o
all:$(OBJS) 
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)
clean:
	$(RM) $(TARGET) $(OBJS)
