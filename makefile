OBJS	= calc.o
SOURCE	= calc.cpp
HEADER	= ./algebra/algebra.h ./basic/Adicao.h ./basic/Subtracao.h ./basic/Multiplicacao.h ./basic/Divisao.h ./calculus/Derivada.h
OUT	= calcpp
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = -lm

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

calc.o: calc.cpp
	$(CC) $(FLAGS) calc.cpp -lcppunit


clean:
	rm -f $(OBJS) $(OUT)
