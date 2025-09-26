CC := gcc
CFLAGS := -IInc -Wall

SRC := $(wildcard Src/*.c)
OBJ := $(SRC:.c=.o)
TARGET := calc

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

