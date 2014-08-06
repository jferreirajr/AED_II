/* *****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	
Created:		Qua 06 Ago 2014 03:22:33 AMT
***************************************************************************** */

#include "inodes.h"

int main(void) {
	struct inodes* root;
	root = inodes.create("/", DIR_);
	root->pout = root;

	do {
	} while(true);
}
