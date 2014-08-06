/* *****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	
Created:		Qua 06 Ago 2014 15:01:21 AMT
***************************************************************************** */

#include "splay.h"

/*LIB SUPORT*/
struct data {
	int valor;
};

int compara(struct data* a, struct data* b) {
	return a->valor - b->valor;
}

struct data* novo(int valor) {
	struct data *elemento;
	elemento = (struct data*)jferreirajr.malloc(sizeof(struct data));
	elemento->valor = valor;
	return elemento;
}

void print(struct data* dado) {
	printf("%d", dado->valor);
}

/* START */

typedef struct tree {
	struct splay* root;
} tree;

int main(void) {
	tree* splay;
	splay->root = splay.new(novo(5));

	

}
