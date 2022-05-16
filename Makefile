all: asciicode

asciicode: main.c
	gcc main.c -o asciicode

install: all
	cp asciicode /usr/local/bin

uninstall:
	rm -f /usr/local/bin/asciicode

clean:
	rm -f asciicode
