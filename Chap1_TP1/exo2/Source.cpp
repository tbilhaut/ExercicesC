#include<stdio.h>
#include <conio.h> //pour getch()
int main()
{
	int x = 4, y;
	y = (x > 5) && (x < 8);
	printf_s(" prem évaluation : \t x = %d y = %d\n ", x, y); //x=4 y=0
	x = y + x + 2;
	y = (x > 5) && (x < 7);
	printf_s(" 2ème évaluation : \t x = %d y = %d\n ", x, y); //x=6 y=1
	_getch();
}