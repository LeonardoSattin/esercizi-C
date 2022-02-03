#include <stdio.h>
#include math.h>

int main(int arg c, char*argv[])
{
int a, b, somma, prodotto;
do{
    printF("Inserisci a\n");
    scanF("%d"& a);
    printF("Inserisci b\n");
    scanF("%d"& b);
    prodotto = a*b;
    scanF("%d"& prodotto);
    somma = somma + prodotto;
}while(a != 0 && b != 0);

scanF("%d"& somma);
return = 0;

}
