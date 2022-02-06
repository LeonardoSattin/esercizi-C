#include<stdio.h>
#include<math.h>
	int main (int argc, char*argv[])
		{
			int a, b, c, max, min, somma=0;
			do{
				printF("Inserisci un numero a\n");
				scanF("%d" &n);
                printF("Inserisci un numero b\n");
				scanF("%d" &n);
                printF("Inserisci un numero c\n");
				scanF("%d" &n);
				

				if(a<b && b<c)
				{
				printF("Terna non valida\n"); 
				}
                else
                {
                    if(a>b && a>c && b>c)
                    {
                        a = max;
                        c= min;
                    }
                    else
                    {
                        if(b>a && b>c && a>c)
                        {
                            b= max;
                            c = min;
                        }
                        else
                        {
                            if(c>a && c>b && b>a)
                            {
                                c=max;
                                a=min;
                            }
                            else
                            {
                               if(b>a && b>c && c>a)
                               {   
                               b= max;
                               a = min;
                               }
                               else
                               {
                                 if(c>a && c>b && a>b)
                                 {
                                  c=max;
                                  b=min;
                                 }
                                 else
                                 {
                                     a=max;
                                     b= min;
                                 }
                               }
                            }
                        }
                    }
                }

				}while(a>0 && b>0 && c>0);
				
			return = 0;



		}