#include <stdio.h>
#include <stdlib.h>

/* 4	Leer 20 n�meros enteros positivos, indicar cu�l es el mayor
 y en qu� orden fue le�do 
(a que elemento pertenece). Mostrar el vector completo */

int main() {

int num[20];
int max;
int i,j,g;

printf("ingrese 20 numeros enteros positivos : ");
  for(i=0;i<2;i++){
  scanf("%d",&num[i]);
  }
    
       
   for(j=0;j<2;j++){
   printf("el elemento %d contiene el numero %d\n ",j,num[j]);
   }
     
       max=num[0];
	 
	 for(g=0;g<2;g++)
	 { 
	   if(num[j]==max)
      max=num[j];
     }
    
       
    
     printf("el numero mayor es %d\n ",max);

system("pause");
	return 0;
}
