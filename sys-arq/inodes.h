/* *****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	
Created:		Qua 06 Ago 2014 03:00:03 AMT
***************************************************************************** */

#ifndef INODES_H_
#define INODES_H_

#include "jferreirajr.h"

#define DIR_ true
#define FILE_ false

struct inodes {
	char name[32];
	bool type;
	struct inodes *prin; /* CONTENTS */
	struct inodes *prox;
	struct inodes *pout;
};

extern struct inodes* inodes__create(string name, bool type);
extern void inodes__insert(struct inodes* inode, struct inodes* here);
extern void inodes__remove(struct inodes* inode);

static const struct {
	struct inodes* (* create)(string name, bool type);
	void (* insert)(struct inodes* inode, struct inodes* here);
	void (* remove)(struct inodes* inode);
} inodes = {
	inodes__create,
	inodes__insert,
	inodes__remove
};

#endif
