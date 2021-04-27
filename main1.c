#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inserzione.h"
#include "sostituzione.h"
#include "scambio_bubble.h"
#include "selezione.h"
int main(){
  int scelta;
printf("Ordinamenti");
printf("\n");
printf("1.Bubblesort\n");
printf("2.Inserzione\n");
printf("3.Selezione\n");
printf("4.Sostituzione\n");
scanf("%d", & scelta);
int MAX = 20;
int dim, i , j , t;
int vect[MAX];
if(scelta == 1 ){ //bubblesort
 do
    {
    printf("Inserisci numeri vettore (max %d):\n",MAX);
    scanf("%d",&dim);
    }while((dim<2)||(dim>MAX));  
    for(i=0; i<dim; i++)
        scanf("%d",&vect[i]);
    printf("\n");

   ord_bubble ( vect, dim);
}
if(scelta == 2){ //inserzione
 do
    {
    printf("Inserisci numeri vettore (max %d):\n",MAX);
    scanf("%d",&dim);
    }while((dim<2)||(dim>MAX));  
    for(i=0; i<dim; i++)
        scanf("%d",&vect[i]);
    printf("\n");

     ord_ins( vect,  dim);

}
if (scelta == 3){ //selezione
 do
    {
    printf("Inserisci numeri vettore (max %d):\n",MAX);
    scanf("%d",&dim);
    }while((dim<2)||(dim>MAX));  
    for(i=0; i<dim; i++)
        scanf("%d",&vect[i]);
    printf("\n");
     ord_sel ( vect, dim);
}
if (scelta == 4){ //sostituzione
 do
    {
    printf("Inserisci numeri vettore (max %d):\n",MAX);
    scanf("%d",&dim);
    }while((dim<2)||(dim>MAX));  
    for(i=0; i<dim; i++)
        scanf("%d",&vect[i]);
    printf("\n");

      ord_sost ( vect, dim);
 }
}