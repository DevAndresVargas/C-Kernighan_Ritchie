/* CURSO C LIBRO KERNIGHAN & RITCHIE
	Programa de conversion de Fahrenheit a Celsius

   capitulo 1, variables, expresiones e iteraciones
   modificacion: contar lineas, condicional if

*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20 ..., 300

int main()
{
    int c,nl;

    while ((c=getchar())!=EOF) //NOTE: si solo hay una instruccion se puede precindir de {}
        if (c == '\n') ++nl;

    printf("%ld\n",nl);
}
