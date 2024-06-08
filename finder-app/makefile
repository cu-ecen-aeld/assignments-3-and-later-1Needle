all: writer

writer: writer.c
	gcc writer.c -o writer

CROSS_COMPILE:
	$(CROSS_COMPILE)gcc writer.c -o writer

default:
	gcc writer.c -o writer

clean:
	rm -r -f writer


