#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
	srand(time(NULL));
	int I, E;
	float M, N;
	M = 0;
	printf("Saisir le nombre d'eleves : ");
	scanf("%d", &E);
	system("cls");
	for (I = 0; I < E; I++)
	{
		N = ((float)rand() / RAND_MAX * float(20.0));
		M += N;
	}
	M /= E;
	printf("La moyenne est de %.2f", M);
	return 0;
}