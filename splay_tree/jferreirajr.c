/* *****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	LIBRARY ANSI-C/C99 WITH SOME UTIL FUNCTIONS THINKED FOR LINUX
Created:		Qua 06 Ago 2014 01:36:32 AMT
***************************************************************************** */

#include "jferreirajr.h"

void* jferreirajr__malloc(unsigned int size) {
	void *pointer;
	pointer = malloc(size);
	if(NOT pointer)
		jferreirajr__error("on jferreirajr.malloc()");
	return pointer;
}

void  jferreirajr__error(string mesage){
	char error[100];
	strcpy(error, "[!!]FATAL ERROR ");
	strncat(error, mesage, 84);
	perror(error);
	exit(EXIT_FAILURE);
}
