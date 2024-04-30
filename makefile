CC = gcc
CFLAGS = -Wall -Wextra -pthread

SRCS = main.c thread.c
TARGET = proj4

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)

