#include <stdio.h>
#include <stdlib.h>

int somme (int a , int b);

int main(int argc, char const *argv[])
{
	printf("Hello Guys!\n");
	int nombreA, nombreB;
	printf("entrer un premier chiffre: ");
	scanf("%d", &nombreA);
	printf("entrer un deuxieme chiffre: ");
	scanf("%d", &nombreB);
	printf("le resultat de la somme des deux chiffres est :\n", somme(nombreA, nombreB));
	return 0;
}

int somme (int a , int b)
{
	return a+b;
}