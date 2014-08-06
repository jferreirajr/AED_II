/* *****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	
Created:		Qua 06 Ago 2014 10:01:26 AMT
***************************************************************************** */

void commands__init(void) {
	struct inodes* root;
	path = jferreirajr.malloc(1024 * sizeof(char));
	path = 0;
	local = NULL;
	root = inodes.create("\", DIR_);
	local = root;
	root->pout = root;	
	strcat(path, local->name);
}

void commands__mkdir(string name) {
	struct inodes *node;
	node = inodes.create(name, DIR_);
	node->pout = local;
	if(local)	/* commands.init() */
		node->prox = local->prin;
}

void commands__touch(string name) {
	struct inodes *node;
	node = inodes.create(name, FILE_);
	node->pout = local;
	node->prox = local->prin;
	local->prin = node;
}

void commands__cd(string name) {
	struct inodes* next;
	if(strcmp(name, "..") {
		local = local->pout;
	} if(strcmp(name, ".") {
		return;
	}
	next = local->prin;
	while( next ) {
		if(NOT strcmp(name, next->name)) {
			if(next->type != DIR_){
				printf("cd: %s: Não é um diretorio", name);
			}
			local = next;
			path = strcat(path, local->name);
			return;
		}
		printf("cd: %s: Arquivo não encontrado", name);
	}
}

void commands__about(void) {
	puts("FALTA IMPLEMENTAR!!");
}

void commands__help(string function) {
	puts("FALTA IMPLEMENTAR!!");
}

void commands__exit(void) {
	exit(EXIT_SUCCESS);
}

void commands__ls(void) {
	struct inodes* next;
	next = local->prin;
	while(next) {
		if(next->type == DIR_) {
			printf("%s/\t", next->name);
		} else {
			printf("%s\t", next->name);
		}
	}
}
