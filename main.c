#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inserzione.h"
#include "sostituzione.h"
#include "scambio_bubble.h"
#include "selezione.h"

#define max 20

int main(int argc, char *argv[])
{
    char *scelta;
    int i;

    system("clear");

    start:
    printf("Programma riordinamento di un vettore\n\n");
    printf("1.bubblesort\n");
    printf("2.inserzione\n");
    printf("3.selezione\n");
    printf("4.sostituzione\n\n");
    printf("perfavore scrivere il tipo di ordinamento desiderato\n> ");
    scanf("%s" , &scelta);

        if(strcmp(&scelta , "bubblesort") == 0){
            
            system("clear");
            errore:
            printf("inserire la grandezza del vettore(non piu grande di 20 e minore di 10)\n> ");
            scanf("%d" , &i);

                if(i > 20 || i < 10)
                {
                    system("clear");
                    printf("numero inserito non rispetta la grandezza massima o minima\n\n");
                    goto errore;
                }

                    bubble_vet(i);
                    exit(0);

        }

        if(strcmp(&scelta , "inserzione") == 0){

            system("clear");
            errore1:
            printf("inserire la grandezza del vettore(non piu grande di 20 e minore di 10)\n> ");
            scanf("%d" , &i);

                if(i > 20 || i < 10)
                {
                    system("clear");
                    printf("numero inserito non rispetta la grandezza massima o minima\n\n");
                    goto errore1;
                }

                    inserz_vet(i);
                    exit(0);
        }

        if(strcmp(&scelta , "selezione") == 0){

            system("clear");
            errore2:
            printf("inserire la grandezza del vettore(non piu grande di 20 e minore di 10)\n> ");
            scanf("%d" , &i);

                if(i > 20 || i < 10)
                {
                    system("clear");
                    printf("numero inserito non rispetta la grandezza massima o minima\n\n");
                    goto errore2;
                }

                    selez_sort(i);
                    exit(0);
        }

        if(strcmp(&scelta , "sostituzione") == 0){

            system("clear");
            errore3:
            printf("inserire la grandezza del vettore(non piu grande di 20 e minore di 10)\n> ");
            scanf("%d" , &i);

                if(i > 20 || i < 10)
                {
                    system("clear");
                    printf("numero inserito non rispetta la grandezza massima o minima\n\n");
                    goto errore3;
                }

                    sort_sost_vet(i);
                    exit(0);
        
        }else{

            system("clear");
            printf("scelta inserita non valida");
            goto start;

        }

        
        



    return 0;
}   





