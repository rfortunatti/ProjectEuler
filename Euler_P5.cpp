#include <stdio.h>
#include <cstdlib>
#include <time.h>


int main ()
{
	int n;
	long t_inicio, t_fim, t_total;

	 time (&t_inicio);

	for (n = 1; n > 0; n++)
	{
		if (n%1 == 0 && n%2 == 0 && n%3 == 0 && n%4 == 0 && n%5 == 0 && n%6 == 0 && n%7 == 0 && n%8 == 0 && n%9 == 0 && n%10 == 0 && n%11 == 0 && n%12 == 0 && n%13 == 0 && n%14 == 0 && n%15 == 0 && n%16 == 0 && n%17 == 0 && n%18 == 0 && n%19 == 0 && n%20 == 0)
		{
			time (&t_fim);
			t_total = difftime (t_fim, t_inicio);
			break;
		}
	}

	printf ("%d\nTempo gasto:%ds\n", n, t_total);
	system ("PAUSE");
}
