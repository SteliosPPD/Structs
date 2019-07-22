/*
	DOMES DEDOMENON
	===============

struct person{
	char onoma[45];
	char *epitheto;
	
	int etos;
}; <-------- SOSOSOS

Na grafei programma poy dexetai apo orismata grammis edolon ena onoma, epitheto kai etos
gennisis kai ta apohtiekvei se ena struct person kai emfanizei ta dedomena apo to struct.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <ctype.h>

struct person{
	char onoma[45];
	char *epitheto;
	
	int etos;
};

int main(int argc, char* argv[]){
	//int         x;
	struct person p;
	
	if (argc != 4){
		printf("Prepei na dosete onoma, epitheto kai etos gennisis!\n");
		return 1;
	}
	
	strcpy(p.onoma, argv[1]);
	p.epitheto = strdup(argv[2]);
	p.etos = atoi(argv[3]);
	
	printf("%s %s %d \n", p.onoma, p.epitheto, p.etos);

	return 0;
}
