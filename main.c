#include <stdio.h>
#include <stdlib.h>

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
   printf("quanti numeri si vogliono inserire:? \n");
   scanf("%d",&quanti);
 }while((quanti<2)||(quanti>maxV));
 for(x=0; x<quanti; x++){
   printf("Inserire valore del vettore: \n");
   scanf("%d",&vettore[x]);

 }
 for(x=0; x<quanti; x++)
 {
   for(y=x+1; y<quanti; y++)
     if(vettore[x]>vettore[y])
     {
       tmp=vettore[x];
       vettore[x]=vettore[y];
       vettore[y]=tmp;
     }
 }
 for(x=0; x<quanti; x++)
   printf("Valore del vettore: %d \n",vettore[x]);
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

    for (i = 0; i < quanti-1; i++)
    {
        min= i;
        for (j = i+1; j < quanti; j++)
        {
        	if (vettore[j] < vettore[min])
        	{
        	     min= j;
        	}
        }
        tmp= vettore[min];
        vettore[min]= vettore[i];
        vettore[i]= tmp;
    }
 for(x=0; x<quanti; x++)
   printf("Valore del vettore: %d \n",vettore[x]);
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
     printf("Inserire valore del vettore: ");
     scanf("%d",&vettore[x]);
    }

  for(x=0; x<(quanti-1); x++)
  {
    for(y=x+1; y<quanti; y++)
    {
     if(vettore[x]>vettore[y]) {
       tmp= vettore[x];
       vettore[x]=vettore[y];
       vettore[y]= tmp;
       printvect(vettore, quanti);
     }
           
    }

  }
   

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
     printf("Inserire valore del vettore: ");
     scanf("%d",&vettore[x]);
    }

 for(x=1;x<quanti;x++) {
		temp=vettore[x];
         y=x-1;
		while((vettore[y]>temp) && (y>=0)) {
			vettore[y+1]=vettore[y];
              y--;
                }
		vettore[y+1]=temp;
		}
		for(x=0; x<quanti; x++)
   printf("Valore del vettore: %d \n",vettore[x]);
 }

 }