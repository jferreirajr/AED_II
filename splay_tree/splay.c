/* *****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	
Created:		Qua 06 Ago 2014 14:49:49 AMT
***************************************************************************** */

struct splay {
	void *info;	
	struct splay *left;
	struct splay *right;
	struct splay *super;
};

struct splay* splay__create(void) {
	struct splay* prototype;
	prototype = (struct splay*)jferreirajr.malloc(sizeof(struct splay));
	prototype->info = NULL;
	prototype->left = NULL;
	prototype->right = NULL;
	prototype->super = NULL;
	return prototype;
}

extern struct splay* splay__new(void *data) {
	struct splay* node;
	node = splay__create();
	node->info = data;
	return node;
}
extern struct splay* splay__find(void *data, struct splay *tree, int(* compare)(void *a, void *b));
extern void splay__remove(void *data, struct splay *tree, int(* compare)(void *a, void *b));


