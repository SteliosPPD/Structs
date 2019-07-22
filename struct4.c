/*
	DOMES DEDOMENON
	===============

struct person{
	char onoma[45];
	char *epitheto;
	
	int etos;
}; <-------- SOSOSOS

typedef pedio1 pedio2: to pedio2 einai panta mono i teleftaia leksi. To pedio1 einai 
		oti iparxei anamesa sto typedef kai sto pedio2. Dilonoume oti anti na grafoume
		to pedio1 tha grafoume mono to pedio2.
		
struct ConnectionToSecondServerInformation{


};

typedef struct ConnectionToSecondServerInformation** info;

info info1;

Na grafei programma poy dexetai ta stoixeia 2 atomon kai ta apohtiekvei se ena pinaka
apo 2 struct person kai emfanizei ta dedomena apo ton pinaka.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <ctype.h>

struct date{
	int imera;
	int minas;
	int xronia;
};


struct person{
	char onoma[45];
	char *epitheto; // <--------- sosososos
	
	struct date etos_gen;
};

typedef struct person magas;

int main(){
	//int         x;
	//struct person p;
	magas p;
	int i;
	char epitheto[45];


		printf("Dose onoma atomu: ");
		scanf("%s", p.onoma);
		
		printf("Dose epitheto atomu: ");
		scanf("%s", epitheto);
		p.epitheto = strdup(epitheto);// epitheto; //
		
		printf("Dose etos gennisis atomu: ");
		scanf("%d", &(p.etos_gen.xronia));


		
		printf("%s %s %d \n", p.onoma, p.epitheto, p.etos_gen.xronia);


	return 0;
}
