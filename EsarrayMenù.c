#include <stdio.h>
#include <limits.h>

int main (int argc, char*argv[])
    {
        int scelta, numeri[MAX_INT], i;
        printf("1 - Visuaizza array");
        printf("2 - Inserisci elemento in coda");
        printf("3 - Modifica elemento");
        printf("4 - Elimina elemento");
        printf("5 - Ricerca elemento");
        printf("6 - Inserisci elemento in una posizione");
        printf("7 - Visualizza array al contrario");
        printf("0 - Esci");

        printf("Inserisci numero");
        scanf("%d",& scelta);

        do
        {
            if(scelta == 1)
            {
                for(i = 0; i < MAX_INT; i++)
                {
                    printf("Elemento array");
                    scanf("%d",& numeri[i]);
                }            
            }
            if(scelta == 2)
            {
                for(i = MAX_INT - 1; i < MAX_INT; i++)
                {
                    printf("Inserisci elemento in coda");
                    scanf("%d",& numeri[i]);
                }
            }
            if(scelta == 3)
            {
                int posto;
                printf("Inserisci posto dell'array da modificare");
                scanf("%d",&posto);
                for(i = posto; i < MAX_INT; i++)
                {
                    numero[i] = 0;
                    printf("Inserisci numero");
                    scanf("%d",& numero[posto]);
                }
            }
            if(scelta == 4)
            {
                    int posto;
                    printf("Inserisci posto dell'array da eliminare");
                    scanf("%d",&posto);
                    for(i = posto; i < MAX_INT; i++)
                    {
                        numero[i] = 0;
                    }
            }   
            if(scelta == 5)
            {
                int ricerca;
                printf("Inserisci numero da ricercare");
                scanf("%d",& ricerca);
                for(i = 0; i < MAX_INT; i++)
                {
                    if(numero[i] == ricerca)
                    {
                        printf("Elemento presente");
                    }
                    else
                    {
                        printf("Elemento non presente");
                    }
                }
            }
            if(scelta == 6)
            {
                int pos;
                printf("Inserisci posizione da aggiungere elemento");
                scanf("%d",& pos)
                for(i = pos; i < MAX_INT; i++)
                {
                    printf("Inserisci numero");
                    scanf("5d",& numero[pos]);
                }
            }
            if(scelta == 7)
            {
                for(i = MAX_INT - 1; i < MAX_INT; i--)
                {
                    printf("Elemento array");
                    scanf("%d",& numeri[i]);
                }            
            }
            if(scelta == 0)
            {
                return -1;
            }
        }while(scelta > 0 && scelta < 8);
        
        return 0;

    }