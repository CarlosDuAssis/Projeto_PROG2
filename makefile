# Nome do executável
EXEC = programa

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -g

# Arquivos de código-fonte e objetos
SRCS = main.c funcoes.c
OBJS = $(SRCS:.c=.o)

# Regra principal
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

# Regra para compilar os arquivos .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos objeto e executável
.PHONY: clean
clean:
	rm -f $(OBJS) $(EXEC)
