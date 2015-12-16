OBJ = main.o

main: $(OBJ)
	g++ -o main $(OBJ)

$(OBJ): main.c particle.h
	g++ -c main.c

clean: 
	rm main $(OBJ)

