CC=gcc
CFLAGS=-lm

all: residual_stocks repeated_char

residual_stocks: FORCE
	rm -rf *~ residual_stocks
	$(CC) -o residual_stocks residual_stocks.c residual_stocks_main.obj $(CFLAGS)

repeated_char: FORCE
	rm -rf *~ repeated_char
	$(CC) -o repeated_char repeated_char.c repeated_char_main.obj $(CFLAGS)

clean:
	rm -rf *~ residual_stocks repeated_char

FORCE: