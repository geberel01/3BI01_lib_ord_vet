//Moretti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inserzione.h"
#include "sostituzione.h"
#include "scambio_bubble.h"
#include "selezione.h"
int main(){

  int selezione;
printf("Ordinamenti\n");
printf("1:Bubblesort\n");
printf("2:Inserzione\n");
printf("3:Selezione\n");
printf("4:Sostituzione\n");
scanf("%d", & selezione);
int m = 20;
int d, i , j , t;
int vect[m];
if(selezione == 1 ){
 do
    {
    printf("Inserire numeri vettore [max %d]:\n",m);
    scanf("%d",&d);
    }while((d<2)||(d>m));  
    for(i=0; i<d; i++)
        scanf("%d",&vect[i]);
    printf("\n");

ord_bubble ( vect, d);
}
if(selezione == 2){ //inserzione
 do
    {
    printf("Inserire numeri vettore (max %d):\n",m);
    scanf("%d",&d);
    }while((d<2)||(d>m));  
    for(i=0; i<d; i++)
        scanf("%d",&vect[i]);
    printf("\n");

     ord_ins( vect,  d);

}
if (selezione == 3){
 do
    {
    printf("Inserire numeri vettore (max %d):\n",m);
    scanf("%d",&d);
    }while((d<2)||(d>m));  
    for(i=0; i<d; i++)
        scanf("%d",&vect[i]);
    printf("\n");

}
if (selezione == 4){
 do
    {
    printf("Inserire numeri vettore (max %d):\n",m);
    scanf("%d",&d);
    }while((d<2)||(d>m));  
    for(i=0; i<d; i++)
        scanf("%d",&vect[i]);
    printf("\n");

      ord_sost ( vect, d);
 }
}
