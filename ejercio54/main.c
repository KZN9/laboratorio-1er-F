#include <stdio.h>
#include <stdlib.h>

/* 54.Escribir un programa que determine si un a�o es bisiesto.
 Un a�o es bisiesto si es m�ltiplo de 4.
  Los a�os m�ltiplos de 100 no son bisiestos, salvo si ellos tambi�n son m�ltiplos de 400 */

int main() {

 int anio;
 	
  printf ("ingrese un a%co",164);
  	scanf("%d",&anio);
  

 if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){  
    printf("El a%co es bisiesto",164);
}
else {
    printf("no  a%co es bisiesto",164);
}

  
  
	
	system("pause");
	return 0;
}
