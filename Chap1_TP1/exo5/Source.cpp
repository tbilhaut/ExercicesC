#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main(int arcg, char**argv)

{
	float amountArticle, amountFacture, amountReduction;
	int nbArticle;

	printf("Veuillez entrer le nombre d'articles s'il vous plait :\n");
	scanf("%d", &nbArticle);
	printf("Veuillez entrer le montant de l'article s'il vous plait :\n");
	scanf("%f", &amountArticle);

	amountFacture = nbArticle * amountArticle;

	if (amountFacture > 500)
	{
		printf("Le montant de la facture est de : %2f, sans reduction", amountFacture);
		amountReduction = amountFacture * 10.0 / 100.0;
		amountFacture -= amountReduction;
		printf("Le montant de la facture apres reduction de 10 pourcents est de %.2f", amountFacture);
	}
	else
	{
		printf("Le montant de la facture est de : %.2f", amountFacture);
	}
	return 0;
}