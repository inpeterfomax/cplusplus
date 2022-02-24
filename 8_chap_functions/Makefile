OBJ1 := template.o
OBJ2 := twotemps.o

TARGET := twotemps template

all: $(TARGET)

template:$(OBJ1)
	g++ -o $@ $<

twotemps:$(OBJ2)
	g++ -o $@ $<


clean:
	rm *.o -rf 
	rm $(TARGET) -rf
