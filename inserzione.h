#include <stdio.h>
#include <stdlib.h>

int vector[];

void inserz_vet(int i)
{

    carica_vet(i);
    sort_vet(i);

}


void carica_vet(int vet)
{
    int i = 0;

        while(i < vet)
        {
            system("clear");
            printf("inserire un numero alla posizione %d del vettore\n> " , i);
            scanf("%d" , &vector[i]);
            ++i;
        }

}

void sort_vet(int n_vet)
{

    int p , j , i = 0;
    system("clear");

        for(int a = 1 ; a < n_vet ; ++a)
        {
            p = vector[a];
            j = a - 1;

                while(j >= 0 && vector[j] > p)
                {
                    vector[j+1] = vector[j];
                    --j;

                }

                    vector[j+1] = p;

                    printf("\n\npassaggio [%d]\n\n" , i);

                        for(int i = 0 ; i < n_vet ; ++i)
                        {
                            
                            printf("[%3d]" , vector[i]);

                        }

                            i++;

        }

        printf("\n\n\n");

}