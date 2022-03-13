#include <stdio.h>
#define DIM = 5;
int main(int argc, char*argv[])
{
    int N[DIM];
    int i;
    for(i = 0; i<DIM; i++)
    {
        printF("Inserisci numero");
        scanF("%d\n", &N[i]);
    }
        for(i = 0; i<DIM; i++)
    {
        int temp; 
        int temp2;
        temp = N[0];
        N[0] = N[4];
        N[4] = N[0];
        temp2 = N[1];
        N[1] = N[3];
        N[3] = N[1]; 
        scanF("%d\n", &N[i]);
    }
    return 0;
}
