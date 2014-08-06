/* ****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	LIBRARY ANSI-C/C99 WITH SOME UTIL FUNCTIONS THINKED FOR LINUX
Created:		Ter 05 Ago 2014 01:30:03 AMT
***************************************************************************** */

#ifndef JFERREIRAJR_H_
#define JFERREIRAJR_H_

/* EXTERN LIBRARIES*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>
#include <signal.h>
#include <ctype.h>
#include <math.h>
#include <locale.h>
#include <wchar.h>

/* DEFINES */

#define NOT !
#define AND &&
#define OR ||

#define MIN(x,y) x<y?x:y
#define MAX(x,y) x>y?x:y

typedef char* string;

/* FUNCTIONS */

extern void* jferreirajr__malloc(unsigned int size);
extern void  jferreirajr__error(string mesage);
extern string jferreirajr__user(void);

/* NAMESPACE */

static const struct {
	void* (* malloc)(unsigned int size);
	void (* error)(string mesage);
	string (* user)(void);
} jferreirajr = {
	jferreirajr__malloc,
	jferreirajr__error,
	jferreirajr__user
};

#endif
