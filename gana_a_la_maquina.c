#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int max_z=90;
    int min_a=65;
    int win_c=0;
    int player_c;
    int state;
    char t_again[]= "Intenta de nuevo =>";

    #define PLAY 1
    #define STOP 0

    srand(time(NULL));
    win_c=rand ()%(max_z-min_a+1)+min_a;
    printf("Intenta adivinar la letra que estoy pensando\n=>");

    state = PLAY;
    while (state == PLAY) {

        player_c = getchar();


        if (player_c != '\n'){
            if(!((player_c<=max_z && player_c>=min_a)||(player_c>=97&&player_c<=122))){

                printf("Caracter invalido [%c]\n=>",player_c);
                printf("%c    <==",player_c);

            }else{
                    if (player_c>96) player_c -= 32;

                    if (player_c==win_c) state = STOP;
                    else {
                        if (player_c<win_c)
                            printf("%c<[%c]\n%s",player_c,win_c,t_again);
                        else
                            printf("%c>[%c]\n%s",player_c,win_c,t_again);
                    }
            };
        }

    }
    printf("Ganaste");
}
