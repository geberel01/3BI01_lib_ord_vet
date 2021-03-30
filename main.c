#include "mylib.h"

int main(void) 
{
    int dim;
    int vect[MAXVETT];

    dim=insvect(vect);

    printvect(vect,dim);

    ord_sost(vect,dim);

  return 0;
}