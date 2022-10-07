#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv)
{
	// 1 - Déclarer deux tableaux de 10 réels chacuns
	float t1[10], t2[10];
	int i = 0;
	// 2 - Lire 10 réels et les stocker dans chacuns des tableaux
	for (i = 0; i < 10; i++)
	{
		printf("Entrez l'entier %d: ", i + 1);
		scanf("%f", &t1[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("Entrez l'entier %d: ", i + 1);
		scanf("%f", &t1[i]);
	}
	// 3 - Rechercher le + grand nombre et le + petit
	while (t2!=0)
	{
		t1[i] += t2[i];
		t2[i] -= t2[i];
	}
	// 4 - Afficher le + pland nombre et le + petit 
	for (i = 0; i < 20; i++)
	{
		printf("t1 = [");
		printf("%f", t1[i]);
	}

	return 0;
}