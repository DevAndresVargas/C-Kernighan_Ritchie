/* CURSO C LIBRO KERNIGHAN & RITCHIE
	Programa de conversion de Fahrenheit a Celsius

   capitulo 1, variables, expresiones e iteraciones
   modificacion: contar caracteres

*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20 ..., 300

int main()
{
    long nc;
    nc = 0;

    while (getchar()!=EOF) //NOTE: si solo hay una instruccion se puede precindir de {}
        ++nc;

    printf("%ld\n",nc);
}
