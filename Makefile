CC=gcc
CFLAGS=-Wall -ansi -pedantic
TARGET=out/helloworld
SRC=src/helloworld.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
