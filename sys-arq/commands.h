/* *****************************************************************************
Author:			JONY DE OLIVEIRA FERREIRA JUNIOR <jferreirajr@linuxmail.org>
Description:	
Created:		Qua 06 Ago 2014 10:01:26 AMT
***************************************************************************** */

#include "inodes.h"

extern void commands__init(void);
extern void commands__mkdir(string name);
extern void commands__touch(string name);
extern void commands__cd(string name);
extern void commands__about(void);
extern void commands__help(string function);
extern void commands__exit(void);
extern void commands__ls(void);

struct inodes* local;
string path;

static const struct {
	void (* init)(void);
	void (* mkdir)(string);
	void (* touch)(string);
	void (* cd)(string);
	void (* about)(void);
	void (* help)(string);
	void (* exit)(void);

} commands = {
	commands__init,
	commands__mkdir,
	commands__touch,
	commands__cd,
	commands__about,
	commands__help,
	commands__exit
};
