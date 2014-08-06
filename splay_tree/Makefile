COMPILADOR=gcc
PARAMETROS=-W -Wall -ansi -pedantic -g -lm
EXECUTAVEL=splay
FONTES=$(wildcard *.c)
OBJETOS=$(FONTES:.c=.o)

all:$(EXECUTAVEL)
	@echo "Compilação concluida"

$(EXECUTAVEL): $(OBJETOS)
	@echo "Gerando o executavel..."
	$(COMPILADOR) -o $@ $^
	@echo "Arquivo executavel gerado\n"
	
%.o: %.c
	@echo "Compilando em codigo-objeto..."
	$(COMPILADOR) -o $@ -c $< $(PARAMETROS)
	@echo "Codigo-objeto gerado\n"
							
objects: $(OBJETOS)
	@echo "Codigos-objetos gerados"

clean-all: clean mrproper
	@echo "Arquivos compilados removidos"
								
clean:
	@echo "Removendo os codigos-objetos..."
	rm -rf $(OBJETOS)
	@echo "Codigos-objetos removidos\n"

mrproper: clean
	@echo "Removendo o executavel..."
	rm -rf $(EXECUTAVEL)
	@echo "Arquivo executavel removido\n"

