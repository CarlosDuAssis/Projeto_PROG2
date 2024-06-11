main: main.o funcoes.o
	@echo "Gerando arquivo executável"
	gcc main.o funcoes.o -o main

main.o: main.c
	@echo "Compilando main.c"
	gcc -c main.c

funcoes.o: funcoes.c
	@echo "Compilando funcoes.c"
	gcc -c funcoes.c

clean:
	@echo "Apagando objetos e executáveis antigos"
	del /Q *.o  *.exe main

run: main
	./main


# compilar no windows: mingw32-make
# executar: mingw32-make run
# clean: mingw32-make clean