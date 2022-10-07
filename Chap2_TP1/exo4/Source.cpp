#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv)
{
	bool isPrime[101];

	for (int i = 0; i < 101; i++)
	{
		isPrime[i] = true;


		if (i > 2)
		{
			if (i > 2 && i % 2 == 0) isPrime[i] = false;
			if (i > 3 && i % 3 == 0) isPrime[i] = false;
			if (i > 5 && i % 5 == 0) isPrime[i] = false;
			if (i > 7 && i % 7 == 0) isPrime[i] = false;
		}
	}

	for (int i = 1; i < 101; i++)
	{
		printf("%d %s\n", i, isPrime[i] ? "est premier" : "n'est pas premier");
	}

	return 0;
}