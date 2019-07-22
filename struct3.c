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

struct person{
	char onoma[45];
	char *epitheto; // <--------- sosososos
	
	int etos;
};

typedef struct person magas;

int main(){
	//int         x;
	//struct person p;
	magas p[2];
	int i;
	char epitheto[45];

	for (i = 0 ; i < 2 ; i++){
		printf("Dose onoma atomu %d: ", i+1);
		scanf("%s", p[i].onoma);
		
		printf("Dose epitheto atomu %d: ", i+1);
		scanf("%s", p[i].epitheto); // epitheto);
		p[i].epitheto = strdup(epitheto);// epitheto; //
		
		printf("Dose etos gennisis atomu %d: ", i+1);
		scanf("%d", &(p[i].etos));
	}

	for (i = 0 ; i < 2 ; i++){		
		printf("%s %s %d \n", p[i].onoma, p[i].epitheto, p[i].etos);
	}

	return 0;
}
