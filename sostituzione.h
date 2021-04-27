#include <stdio.h>
#include <stdlib.h>

int vector[];

void sost_vet(int i)
{
    carica_sost_vet(i);
    sort_sost_vet(i);
}


void carica_sost_vet(int vet)
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


void sort_sost_vet(int n_vet)
{
    int c , i = 0 , j , a; 
    system("clear");

        while(i < n_vet-1)
        {
            j = i + 1;

                while(j < n_vet)
                {
                    if(vector[i] > vector[j])
                    {   
                        c = vector[i];
                        vector[i] = vector[j];
                        vector[j] = c; 

                    }
                    
                    j++;
                }

                    i++;
                    
                    printf("\n\npassaggio [%d]\n\n" , a);

                        for(int i = 0 ; i < n_vet ; ++i)
                        {
                            
                            printf("[%3d]" , vector[i]);

                        }

                            a++;
        }

            printf("\n\n\n");

}