#include <stdio.h>
#include <cstdlib>

int main ()
{
	int count, v_sum;

	for (count = 0, v_sum = 0; count < 1000; count++)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			v_sum = v_sum + count;
		}
	}

	printf ("O valor da soma: %d\n", v_sum);
	system ("PAUSE");

}
