#include <cstdlib>
#include <stdio.h>
#include "Euler_P4.h"

int main()
{
	int n1, n2, produto, v_maior = 0;

	for (n1 = 100; n1 < 1000; n1++)
	{
		for (n2 = 100; n2 < 1000; n2++)
		{
			produto = n1 * n2;
			if (verificador_palindromo(produto) == 1)
			{
				if (produto > v_maior)
				{
					v_maior = produto;
				}
			}
		}
	}
	printf ("%d\n", v_maior);
	system ("PAUSE");
}

int verificador_palindromo (int verif_produto)
{
	int nconvertido = 0, noperacional, resto;

	noperacional = verif_produto;
    while (noperacional > 0)
    {
        resto = noperacional % 10;
        noperacional = noperacional / 10;
        nconvertido = (nconvertido * 10) + resto;
    }
    if (nconvertido == verif_produto)
    {
		return 1;
    }
    else
    {
		return 0;
    }
}
