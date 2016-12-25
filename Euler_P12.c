#include <stdio.h>

//Um numero triangular Tn pode ser definido pela formula:
//Tn = [n(n+1)] / 2
//What is the value of the first triangle number to have over five hundred divisors?

//A ideia e testar um numero triangular de cada vez e testar seus divisores.
//Aquele que retornar 500 ou mais divisores e a resposta.

int main () {
	
	int tri_n = 1, tri_divisors = 0, tri_val = 0;
	
	for (tri_n = 1, tri_divisors = 0 ;tri_divisors; tri_n++) {
		
		tri_val = func_calc_tri (tri_n);
		tri_divisors = func_chck_divisors (tri_val);
		printf ("%d", tri_val);
		
		if (tri_divisors > 500)
			printf ("%d", tri_val);
			return tri_val;
	}
	
}

int func_calc_tri (int tri_index) {
	
	int val = 0;
	
	val = (tri_index * (tri_index + 1)) / 2;
	return val;
}

int func_chck_divisors (int num_to_chck) {
	
	int aux, n_div = 0;
	
	for (aux = num_to_chck ; aux > 0; aux--) {
		if (num_to_chck % aux == 0) {
			n_div++;
		}
		else continue;
	}
	
	return n_div;
}