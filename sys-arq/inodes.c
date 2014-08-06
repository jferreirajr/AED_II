/* *****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	
Created:		Qua 06 Ago 2014 03:00:03 AMT
***************************************************************************** */

#include "inodes.h"

struct inodes* inodes__create(string name, bool type) {
	struct inodes* inode;
	inode = (struct inodes *)jferreirajr.malloc(sizeof(struct inodes));
	strcpy(inode->name, name);
	inode->prin = NULL;
	inode->prox = NULL;
	inode->pout = NULL;
	inode->type = type;
	return inode;
}
void inodes__insert(struct inodes* inode, struct inodes* here) {
	inode->prox = here->prin;
	here->prin = inode;
	inode->pout = here;
}
void inodes__remove(struct inodes* inode) {
	if(inode->type != DIR_) {
		inode->pout->prox  = inode->prox;
	} else {
		inodes__remove(inode->prin);
		inodes__remove(inode->prox);
	}
	free(inode);
}
