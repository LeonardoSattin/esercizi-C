#include<stdio.h>
#include<math.h>
    int main(int argc, char*argv[])
    {
        int n, n2, i=0;
        do{
            printF("inserisci n\n");
            scanF("%d",& n);
            n2 = n - 2*n;
            scanF("%d",& n2);
          }while(n2<=0, n>= 0);
        do{
            i++;
            scanF("%d", & i);
          }while(i<=n)2, i>= n;
    }