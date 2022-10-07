#include <stdio.h>
#include <conio.h> //pour getch()
int main()
{
	int nb;
	printf_s("entrez un nombre compris entre 1 et 1000\n");
	scanf_s(" %d ", &nb);
	printf_s(" le caractère lu est : %d \n", nb);
	_getch();
}