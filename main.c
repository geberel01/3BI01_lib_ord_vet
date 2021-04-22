#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
//stefano olivero esercizio sugli ordinamenti 
int main()
{
 int scelta;
 printf("| PROGRAMMA CHE ORDINA IL VETTORE IN DIVERSI METODI |\n");
 printf("Inserire [1] per il Bubble Sort\n");
 printf("Inserire [2] per il Selection Sort\n");
 printf("Inserire [3] per il Replacement Sort\n");
 printf("Inserire [4] per l'Insertion Sort\n");
 scanf("%d", & scelta);

 //-----------------------------------------------------------------
 //BUBBLE SORT
 if(scelta==1){
 int maxV= 50;
 int vettore[maxV];
 int x, y, tmp, quanti;
 do
 {
   printf("quanti numeri si vogliono inserire? \n");
   scanf("%d",&quanti);
 }while((quanti<2)||(quanti>maxV));
 for(x=0; x<quanti; x++){
   printf("Inserire valore del vettore: \n");
   scanf("%d",&vettore[x]);
 }

  bubble_sort ( vettore, quanti);

 }
//------------------------------------------------------------------
 //SELETION SORT
 if(scelta==2){
 int maxV= 50;
 int vettore[maxV];
 int x, y, tmp, quanti, min, i, j;
 do
 {
   printf("quanti numeri si vogliono inserire? \n");
   scanf("%d",&quanti);
 }while((quanti<2)||(quanti>maxV));
 for(x=0; x<quanti; x++){
   printf("Inserire valore del vettore: \n");
   scanf("%d",&vettore[x]);
 }

  selection_sort (vettore, quanti);
 
 }
 //-----------------------------------------------------------------
 // REPLACEMENT SORT
 if(scelta==3){
 int maxV= 50;
 int vettore[maxV];
 int x, y, a,b, quanti, tmp;
   do{
    printf("quanti numeri si vogliono inserire? \n");
    scanf("%d",& quanti);
   }while((quanti <2)||(quanti >maxV));
    for(x=0; x<quanti; x++){
     printf("Inserire valore del vettore: \n");
     scanf("%d",&vettore[x]);
    }
    
    sost_sort( vettore, quanti);
    

  }
   

  
//------------------------------------------------------------------
//INSERTION SORT
if(scelta==4){
 int maxV=50;
 int vettore[maxV];
 int x, y, temp, quanti;
 do{
    printf("quanti numeri si vogliono inserire? \n");
    scanf("%d",& quanti);
   }while((quanti <2)||(quanti >maxV));
    for(x=0; x<quanti; x++){
     printf("Inserire valore del vettore: \n");
     scanf("%d",&vettore[x]);
    }

  insert_sort( vettore, quanti);
 
 }
}