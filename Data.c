#include <stdio.h>
#include <string.h>
int main(int argc, char argv[])
{
    string n;
    int Giorno, Mese, Anno;
    printf("inserisci numero di 8 caratteri"\n);
    scanf("%s",&n);
    Giorno = n[0] + n[1];
    Mese = n[2] + n[3];
    Anno = n[4] + n[5] + n[6] + n[7];
    if(Giorno < 32 && Mese < 13 && Anno < 2022)
        printf("La data va bene");
    else 
        ("La data non va bene");

    printf("La data è:"Giorno/Mese/Anno);
    scanf("%d")
}