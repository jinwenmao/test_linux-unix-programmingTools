define CC
	gcc
endef
OPTIONS = -O3 -o
OBJECTS = main.o input.o compute.o
SOURCES = main.c input.c compute.c
HEADERS = main.h input.h compute.h

clomplete: power
	@echo "make complete"

power: $(OBJECTS)
	$(CC) $(OPTIONS) $@ $^ -lm
	@echo "excute code saved in power"

main.o: main.h input.h compute.h

compute.o: compute.h

input.o:input.h

all.tar:$(SOURCES) $(HEADERS) makefile
	tar -cvf - $^ > all.tar

clean:
	rm -f *.o core power

