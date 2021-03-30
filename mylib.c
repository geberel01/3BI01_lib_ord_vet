#include "mylib.h"


//FUNZIONE DI LETTURA VETTORE
int insvect(int vect[])
{
    int dim;
    int i;

    do
    {
    printf("inserisci dimensione:\n");
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
    for(i=0; i<dim; i+)
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
