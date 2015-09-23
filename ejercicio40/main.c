#include <stdio.h>
#include <stdlib.h>

/* 40. 
  Se registran de los empleados de una empresa Número de legajo, sueldo y sexo (1 femenino y 2 masculino).
 Diseñar en  un programa que permita informar cuantas mujeres ganan más de á 500 y cuantos hombres ganan menos de $ 400 */

int main() {

    char Nombre [100];
    char sexo;
    int legajo;
	int sueldo;
    int sueldo500;
    int sueldo400;
    char seguir;  
      	 do {
          printf("\n\nIngrese el  legajo:");
          scanf("%d",&legajo);
          printf("Ingresar sueldo:\n");
          scanf("%d", &sueldo);
          printf("Ingresar sexo:\n\n Femenino (f) \n Masculino(m)\n");
          scanf("%c", &sexo);
                while(sexo != 'm' && sexo != 'f');{
                        printf(" error Reingrese sexo:\n Femenino (1)\nMasculino(2)\n");
                        scanf("%c", &sexo);
				}
 
                if(sexo == 'f'&& sueldo >= 500){
                		sueldo500 = sueldo500 + 1;
						}
               		  if(sexo == 'm' && sueldo <= 400){
               		 sueldo400 = sueldo400++;
					}
                printf("\nDesea cargar otro empleado s/n");
                scanf("%c",&seguir);
             }
                	while(seguir!= 's' && seguir != 'n');{
                        printf("\nERROR.Reingrese respuesta. s/n ?");
                       scanf("%c" , &seguir);
                }
                  while(seguir == 's');{
       					 printf("\n\nMujeres que ganan mas de 500$ : %d",sueldo500);
       					 printf("\nHombres que ganan menos de 400$ : %d",sueldo400);
       				}
 system("pause");
	return 0;
}
