/* *****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	LIBRARY OF IMPLEMENTATION OF A GENERIC SPLAY TREE
Created:		Qua 06 Ago 2014 14:35:52 AMT
***************************************************************************** */

#ifndef SPLAY_TREE_H_
#define SPLAY_TREE_H_

#include "jferreirajr.h"

struct splay {
	void *info;	
	struct splay *left;
	struct splay *right;
	struct splay *super;
};

extern struct splay* splay__create(void);
extern struct splay* splay__new(void *data);
extern struct splay* splay__find(void *data, struct splay *tree, int(* compare)(void *a, void *b));
extern void splay__remove(void *data, struct splay *tree, int(* compare)(void *a, void *b));
extern void splay__insert(void *data, struct splay *tree, int(* compare)(void *a, void *b));

static const struct {
	struct splay* (* create)(void);
	struct splay* (* new)(void*);
	struct splay* (* find)(void*, struct splay*, int(* compare)(void *a, void *b));
	void (* remove)(void*, struct splay*, int(* compare)(void *a, void *b));
	void (* insert)(void*, struct splay*, int(* compare)(void *a, void *b));

} splay = {
	splay__create,
    splay__new,
    splay__find,
    splay__remove,
	splay__insert
};

#endif
