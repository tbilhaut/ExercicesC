#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main()

{

	int nombreEntre = 0, nombreMystere = 0, continuerPartie = 1, choix = 0, choixNiveau = 0;

	int MAX = 0;

	const int MIN = 1;

	printf("   === MENU ===\n\n");

	printf("1. Facile\n");

	printf("2. Dur\n");

	printf("3. Tres Dur\n");

	printf("\nChoisissez votre niveau de jeu: ");

	scanf("%d", &choixNiveau);

	if (choixNiveau == 1)

	{

		MAX = 100;

		printf("\n=== Facile ===");

	}

	if (choixNiveau == 2)

	{

		MAX = 1000;

		printf("\n=== Dur ===");

	}

	if (choixNiveau == 3)

	{

		MAX = 10000;

		printf("\n=== Tres Dur ===");

	}

	printf("\n1. Mode 1 Joueur\n");

	printf("2. Mode 2 joueurs\n\n");

	printf("Entrez votre choix: ");

	scanf("%d", &choix);

	if (choix == 1)

	{

		printf("\nVous avez choisis le Mode 1 Joueur\n\n");

		while (continuerPartie)

		{

			srand(time(NULL));

			nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

			int nombreDeCoup = 1;

			while (nombreEntre != nombreMystere)

			{

				printf("Quel est le nombre mystere ? : ");

				scanf("%d", &nombreEntre);

				if (nombreEntre < nombreMystere)

				{

					printf("C'est plus\n");

				}

				else if (nombreEntre > nombreMystere)
				{

					printf("C'est moins\n");

				}

				else

				{

					printf("\nSuppert !!! Le nombre mystere est bient: %d et vous lavez trouve en %d coups.\n\n", nombreMystere, nombreDeCoup);

				}

				nombreDeCoup++;

			}

			printf("Voulez vous continuer la partie ?\n\n");

			printf("Tapez 1 pour OUI ou 0 pour NON: ");

			scanf("%d", &continuerPartie);

			printf("\n\n");

		}

	}//fin du if(choix == 1)

	else if (choix == 2)

	{

		printf("\nVous avez choisis le Mode 2 Joueurs\n\n");

		while (continuerPartie)

		{

			printf("Joueur 1, Entrez votre Nombre Mystere: ");

			scanf("%d", &nombreMystere);

			printf("\nJoueur 2, Trouvez le Nombre Mystere\n\n");

			int nombreDeCoup = 1;

			while (nombreEntre != nombreMystere)

			{

				printf("Quel est le nombre mystere ? : ");

				scanf("%d", &nombreEntre);

				if (nombreEntre < nombreMystere)

				{

					printf("C'est plus\n");

				}

				else if (nombreEntre > nombreMystere)

				{

					printf("C'est moins\n");

				}

				else

				{

					printf("\nSuppert !!! Le nombre mystere est bient: %d et vous lavez trouve en %d coups.\n\n", nombreMystere, nombreDeCoup);

				}

				nombreDeCoup++;

			}

			printf("Voulez vous continuer la partie ?\n\n");

			printf("Tapez 1 pour OUI ou 0 pour NON: ");

			scanf("%d", &continuerPartie);

			printf("\n\n");

		}

	}//fin du if(choix == 2)

	return 0;

}