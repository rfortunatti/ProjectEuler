#include <stdio.h>
#include <cstdlib>
#include "Euler_P6.h"

int main ()
{
	int v_result, v_sum_sq, v_sumZ;

	v_sum_sq = sum_square();
	v_sumZ = sum_100ZNumbers();
	v_result = v_sumZ - v_sum_sq;
	printf ("%d\n", v_result);
	system ("PAUSE");
}
/*Soma dos quadrados*/
int sum_square ()
{
	int sqf_count, sqf_result;

	for (sqf_count = 1, sqf_result = 0 ; sqf_count < 101; sqf_count++)
	{
		sqf_result = sqf_result + (sqf_count * sqf_count);
	}

	return sqf_result;
}
/*Quadrado da soma*/
int sum_100ZNumbers ()
{
	int sumZ_result, sumZ_count;

	for (sumZ_result = 0, sumZ_count = 1; sumZ_count < 101; sumZ_count++)
	{
		sumZ_result = sumZ_result + sumZ_count;
	}
/*A função já retorna o valor ao quadrado*/
	return (sumZ_result * sumZ_result);
}
