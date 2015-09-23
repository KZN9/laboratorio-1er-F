#include <stdio.h>
#include <stdlib.h>

/*	Diseñar un programa que calcule la superficie de un triángulo a partir del ingreso de su base y altura y muestre el resultado. */

int main() {
 
  float base;
  float altura; 
  float area;


 
   printf("Calcula el Area del  triangulo \n");
   printf("______________________________\n ");
   printf("introduce la base del Triangulo  :\n ");
   scanf("%f", &base); 
   printf("Introduce la altura del Triangulo :\n");
   scanf("%f", &altura);
          area=(base*altura)/2;
   printf("El Area es  : %f ",area);

system ("pause");
return 0;
}

