/* CURSO C LIBRO KERNIGHAN & RITCHIE
	Programa de conversion de Fahrenheit a Celsius

   capitulo 1, variables, expresiones e iteraciones

*/

#include <math.h>
#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20 ..., 300

int main()
{
	float fahr,celsius;
	int lower,upper,step;

	lower=-10;
	upper=50;
	step=10;

	fahr = lower;

	while (celsius<=upper) {
		fahr = celsius*1.8+32;
		printf("%3.0f\t%5.1f\n",celsius,fahr);
		celsius = celsius+step;
	}



}
