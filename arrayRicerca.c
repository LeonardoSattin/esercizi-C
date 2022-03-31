#include <stdio.h>

int Ricerca(int argc, char*argv[], char numero[])
{
    int n;
    printF("Inserisci numero da ricercare");
    scanf("%d", &n);
    for(int i = 0; i < 4; i++)
    {
            if(n == numero[i])
            {
                print("Il numero è presente nell'array");
                return 1;
            }
            else
            {
                printf("Il numero no è presente nell'array");
                return -1;
            }
    }
}
int main()
{
    char numero[4];
    printf("Inserisci numero");
    scanf("%s",&numero);
    Ricerca(numero[4]);
    return 1;

}