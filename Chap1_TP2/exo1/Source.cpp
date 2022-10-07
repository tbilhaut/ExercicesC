#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
	int a;
	double b;
	int resultat;
	printf("Entrez le premier nombre a multiplier : ");
	scanf("%d", &a);
	printf_s("Entrez le second nombre a multiplier : ");
	scanf("%lf", &b);
	resultat = a / (1.00 / b);
	printf("Le resultat de a*b est : %d \n", resultat);
	_getch();
}