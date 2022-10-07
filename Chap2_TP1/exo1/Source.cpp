#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv)
{
	// 1 - Déclarer un tableau de 10 entiers
	int tab[10];
	// 2 - Lire 10 entiers entrés par l'utilisateur
	for (int i = 0; i<10; i++)
	{
		printf("Entrez l'entier %d : ", i + 1);
		scanf("%d",&tab[i]);
	}
	// 3 - Rechercher le + grand nombre et le + petit
	int min = tab[0];
	int max = tab[0];
	int i = 1;
	while (i < 10)
	{
		if (tab[i] < min)
		{
			min = tab[i];
		}
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i = i++;
	}
	// 4 - Afficher le + pland nombre et le + petit 
	printf("Le minimum est %d ; le maximum est %d \n", min, max);
	return 0;
}