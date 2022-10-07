#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
	int eleve;
	int age,sex,nbcine, cbburger;
	const char* QouM, Quick, MacDonalds;
	
	printf("Entrez le nombre d'élèves : ");
	scanf("%d", &eleve);

	while (eleve != 0)
	{
		
		printf("Quel est votre âge ? : ");
		scanf("%d", &age);
		printf("Combien de fois allez-vous au cinema par mois ? : ");
		scanf("%d", &nbcine);
		printf("Vous preferez manger au Quick ou au MacDonalds (ecrire le bon orthographe) ? : ");
		scanf("s", &QouM);
		if (QouM = "Quick")
		{
			Quick == 1;
			MacDonalds == 0;
		}
		else if (QouM = "MacDonalds")
		{
			Quick == 0;
			MacDonalds == 1;
		}
		printf("Vous preferez manger au Quick ou au MacDonalds (ecrire le bon orthographe) ? : ");
		scanf("%d", &cbburger);
		eleve--;
	}





	


	printf("Le prix de votre lettre est : %f", prix);
	printf(" frs \n");
	_getch();
}