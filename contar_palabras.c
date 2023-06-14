/* CURSO C LIBRO KERNIGHAN & RITCHIE
	Programa de conversion de Fahrenheit a Celsius

   capitulo 1, variables, expresiones e iteraciones
   modificacion: contar palabras, condicional if else, define

*/

#include <stdio.h>
/* NOTE: Definimos las constantes */
#define IN 1 // Esta dentro de la palapra
#define OUT 0 // Esta fuera de la palapra

int main()
{
    int c,nl,nw,nc,state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c=getchar())!=EOF) //NOTE: si solo hay una instruccion se puede precindir de {}
    {
        ++nc;
        if (c == '\n') ++nl;
        if (c == ' '||c =='\n'||c =='\t') state=OUT;
        else if (state==OUT){
            ++nw;
            state=IN;
        };
    };

    printf("%d %d %d\n",nl,nw,nc);
}
