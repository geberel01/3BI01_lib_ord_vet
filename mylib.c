// - COMPILAZIONE -
// la prima volta usare <run>
// per compilare con la libreria:
// gcc main.c mylib.c -o prog
// esecuzione:
// ./prog

#include "mylib.h"


//FUNZIONE DI LETTURA VETTORE
int insvect(int vect[])
{
    int dim;
    int i;

    do
    {
    printf("inserisci dimensione (max %d):\n",MAXVETT);
    scanf("%d",&dim);
    }while((dim<2)||(dim>MAXVETT));  
    for(i=0; i<dim; i++)
        scanf("%d",&vect[i]);
    printf("\n");

    return dim; 
}


//FUNZIONE DI STAMPA VETTORE
int printvect(int vect[],int dim)
{
    int i;
    printf("\n");
    for(i=0;i<dim;i++)
        printf("%d ",vect[i]);
        
    printf("\n");

    return 0;
}

int sost_sort(int vettore[], int dim)
{
  int i,j,tmp;
 for(int i=0; i<(dim-1); i++)
  {
    for(j=i+1; j<dim; j++)
    {
     if(vettore[i]>vettore[j]) {
       tmp= vettore[i];
       vettore[i]=vettore[j];
       vettore[j]= tmp;
       printvect(vettore, dim);
     }
           
    }

  }
return 0;
}

int bubble_sort (int vettore[], int dim){
  int x,y,tmp;
  for(x=0; x<dim; x++)
 {
   for(y=x+1; y<dim; y++)
     if(vettore[x]>vettore[y])
     {
       tmp=vettore[x];
       vettore[x]=vettore[y];
       vettore[y]=tmp;
       printvect(vettore,dim);
     }
 }
return 0;
}

int selection_sort (int vettore[], int dim){
int i, j, tmp, min;
  for (i = 0; i < dim-1; i++)
    {
        min= i;
        for (j = i+1; j < dim; j++)
        {
        	if (vettore[j] < vettore[min])
        	{
        	     min= j;
        	}
        }
        tmp= vettore[min];
        vettore[min]= vettore[i];
        vettore[i]= tmp;
         printvect(vettore,dim);
    }
}

//FUNZIONE DI ORDINAMENTO VETTORE PER OSTITUZIONE
int ord_sost(int vect[],int dim) 
{
    int i;
    int j;
    int temp;

    printvect(vect,dim);
    for(i=0; i<(dim-1); i++)
    {
        for(j=i+1; j<dim; j++)
        if(vect[i]>vect[j])
        {
            temp=vect[i];
            vect[i]=vect[j];
            vect[j]=temp;
            printvect(vect,dim);
        }
  }
    return 0;
}

