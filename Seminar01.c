#include <stdio.h>
#include <stdlib.h>
//Se consideră prima literă din numele vostru, și prima literă din prenumele vostru.
//Sa se construiască un articol care să conțină cele două litere.
//Vladut Calin (VC)


struct Vacanta{
	char* locatie;
	int durataZile;	
	float pret;
	
};

struct Vacanta citireVacanta() {
	struct Vacanta v;
	printf("Introduceti locatia: ");
	v.locatie = malloc(100 * sizeof(char));
	scanf_s("%99s", v.locatie, 100);
	printf("\nIntroduceti durata vacantei in zile: ");
	scanf_s("%d", &v.durataZile);
	printf("\nIntroduceti pretul vacantei: ");
	scanf_s("%d", &v.pret);
	return v;
}


int main() {
	//printf("Salutare!\n Introdu un numar intreg: ");
	//int variabila = 0;
	//scanf_s("%d", &variabila);
	//printf("Ai introdus %d:", variabila);
	
	struct Vacanta v;
	v = citireVacanta();
	
	
	return 0;
}