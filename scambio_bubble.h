#include <stdio.h>
#include <stdlib.h>

int vector[];

void bubble_vet(int i)
{
    carica_bubble_vet(i);
    sort_bubble_vet(i);

}


void carica_bubble_vet(int vet)
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

void sort_bubble_vet(int n_vet)
{
    int a = 0 , i = 1 , j , c;
    system("clear");
    
        while(i < n_vet)
        {
            j = n_vet -1;

                while(j >= i)
                {
                    if(vector[j-1] > vector[j])
                    {
                        c = vector[j-1];
                        vector[j-1] = vector[j];
                        vector[j] = c;

                    }

                        j--;


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










