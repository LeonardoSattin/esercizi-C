#include<stdio.h>
#include<math.h>
	int main (int argc, char*argv[])
		{
			int n, somma=0;
			do{
				printF("Inserisci un numero\n");
				scanF("%d" &n);
				somma = somma + sqrt(n);
				scanF("%d" somma);

				if(n<0)
				{
				printF("Numero errato perchè minore di 0, inserire un altro numero") 
				}

				}while(n<0);

			return = 0;



		}