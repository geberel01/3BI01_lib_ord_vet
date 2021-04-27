#include <stdio.h>
#include <stdlib.h>

int vector[];

void selez_sort(int i)
{
    carica_selez_vet(i);
    sort_selez_vet(i);
}


void carica_selez_vet(int vet)
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

void sort_selez_vet(int n_vet)
{
    int min , pmin , j , i = 0 , a = 0;
    system("clear");


        while(i < n_vet-1)
        {
            min = vector[i];
            pmin = i;
            j = i + 1;

                while(j < n_vet)
                {
                    if(vector[j] < min)
                    {
                        min = vector[j];
                        pmin = j;

                    }

                    j++;
                       

                                    
                }

                        if(pmin > i)
                        {
                            vector[pmin] = vector[j];
                            vector[i] = min;

                        }

                            i++;



                        printf("\n\npassaggio [%d]\n\n" , a);

                            for(int b = 0 ; b < n_vet ; ++b)
                            {
                                
                                printf("[%3d]" , vector[b]);

                            }

                                a++;

        }


    printf("\n\n\n");

}













