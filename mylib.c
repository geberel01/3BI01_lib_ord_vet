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

//FUNZIONE DI ORDINAMENTO VETTORE PER OSTITUZIONE
int ord_sost(int vect[],int dim) 
{
    int i;
    int j;
    int temp;

    printvect(vect,dim);
    for(i=0; i<dim; i++)
    {
        for(j=i+1; j<dim; j++)
        if(vect[i]>vect[j])
        {
            temp=vect[i];
            vect[i]=vect[j];
            vect[j]=temp;
            printvect(vect,dim);
        }ò
  }
    return 0;
}
int ord_ins(int vect[], int dim) {
  int i;
    int j;
    int temp; 

for(i=1;i<dim;i++) { 
		temp=vect[i]; 
         j=i-1; 
		while((vect[j]>temp) && (j>=0)) { 
			vect[j+1]=vect[j]; 
              j--;
                } 
		vect[j+1]=temp; 
    printvect(vect,dim);
 return 0;
}

int ord_bubble (int vect[], int dim)
{
  int i;
    int j;
    int tmp;
 for(i=0; i<dim; i++)
 {
   for(j=i+1; j<dim; j++){
     if(vect[i]>vect[j])
     {
       tmp=vect[i];
       vect[i]=vect[j];
       vect[j]=tmp;
       printvect(vect,dim);
     }
   }
     return 0;
 }
}
}


int ord_sel(int vect[], int dim)
{
  int i, j, a, min;
 for(i=0; i<dim; i++){ 
      min=i; 
      for (j = i+1;j < dim; j++){ 
         if (a[j]<a[min]) 
            min=j; 
      } 
      t = a[min];
      a[min] = a[i]; 
      a[i] = t;  
       printvect(vect,dim);
    }
    return 0;
}
}