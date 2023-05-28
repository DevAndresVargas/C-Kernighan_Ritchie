/* CURSO C LIBRO KERNIGHAN & RITCHIE
	Programa de conversion de Fahrenheit a Celsius

   capitulo 1, variables, expresiones e iteraciones

*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20 ..., 300

int main()
{
	int fahr,celsius;
	int lower,upper,step;

	lower=0;
	upper=300;
	step=20;

	fahr = lower;

	for (fahr  = 0; fahr < 300; fahr=fahr+20) {
		celsius = 5*(fahr-32)/9;
		printf("%d\t%d\n",fahr,celsius);
	}
	}
