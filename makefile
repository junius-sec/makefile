TARGET = one
OBJECTS = one.o two.o

$(TARGET): $(OBJECTS)
	gcc -o $@ $^

one.o: one.c
	gcc -c $<

two.o: two.c
	gcc -c $<

