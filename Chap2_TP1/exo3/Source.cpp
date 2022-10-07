#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv)
{
	// 1 - Déclarer le tableau et la variable somme
	float t[3];
	float somme = 0.00;
	int i = 0;
	// 2 - Lire 10 réels et les stocker dans chacuns des tableaux
	for (i = 0; i < 3; i++)
	{
		printf("Entrez le float du tableau %d: ", i + 1);
		scanf("%f", &t[i]);
	}

	// 3 - Calculer la somme des chiffres du tableau
	for (i = 0; i < 3; i++)
	{
		somme += t[i];
	}
	// 4 - Afficher la somme
	
	printf("La somme des chiffres du tableau t est de %f : ", somme);

	return 0;
}