HEADERS = chess.h display.h constants.h
OBJECTS = chess.o display.o

default: chess

%.o: %.c $(HEADERS)
	gcc -c $< -o $@

chess: $(OBJECTS)
	gcc $(OBJECTS) -o $@

clean:
	-rm -f $(OBJECTS)
	-rm -f program
