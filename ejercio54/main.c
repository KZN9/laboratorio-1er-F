#include <stdio.h>
#include <stdlib.h>

/* 54.Escribir un programa que determine si un año es bisiesto.
 Un año es bisiesto si es múltiplo de 4.
  Los años múltiplos de 100 no son bisiestos, salvo si ellos también son múltiplos de 400 */

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
