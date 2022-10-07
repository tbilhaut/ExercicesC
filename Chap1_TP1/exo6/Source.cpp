#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main(int argn, int agvs)

{
	float notesEleve;
	int noteSuperieur10 = 0, i = 0, nbEleves;

	printf("Veuillez saisir le nombre d'élèves sans la classe! \n");

	scanf("%d", &nbEleves);

	while (i < nbEleves)
	{
		printf("\nVeuillez saisir la note de 1 élève noméro %d\n", i + 1);
		scanf("%f", &notesEleve);

		if (notesEleve > 20 || notesEleve < 0)
		{
			printf("La saisie de note est stppée car la note que vous avez saisi est supérieur à 20 ou inférieur à 0!");
			break;
		}
		if (notesEleve > 10)
		{
			noteSuperieur10 += 1;
		}
		i++;
	}
	printf("Il  y a %d note supérieur à 10", noteSuperieur10);
}