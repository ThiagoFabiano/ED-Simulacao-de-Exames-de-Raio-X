CC = gcc
CFLAGS = -Wall -Wextra
TARGET = programa
SRC = main.c patient.c exam.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c patient.h exam.h
	$(CC) $(CFLAGS) -c main.c

patient.o: patient.c patient.h
	$(CC) $(CFLAGS) -c patient.c

exam.o: exam.c exam.h patient.h
	$(CC) $(CFLAGS) -c exam.c

clean:
	rm -f $(OBJ) $(TARGET)
