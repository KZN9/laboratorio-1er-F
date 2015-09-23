#include<stdlib.h>
#include<stdio.h>

/*70.  	Inicializar a cero una matriz de 6 filas por 5 columnas.
 Cargar valores enteros en un elemento determinado, para lo cual se debe informar 
 número de fila y de columna 
 y luego ingresar el valor a cargar.
 Mostrar fa matriz por filas y fuego por columnas*/
 
 
 int main()
 {
 
   int matriz[3][3];
   int i,j,g,k;
   
   printf("cargue las 6 filas y las 5 columnas  de la matriz ");
   		for(i=0;i<6;i++){
   		    for(j=0;j<5;j++){
   			   printf("cargue los elemento de la posicion[%d][%d]la matriz ", i,j);
				  scanf("%d", &matriz[i][j]);
		   
		    }
		   }
            
            for(i=1;i<6;i++){
					for(j=0;j<5;j++){	
		printf("[%d]" ,matriz[i][j]);
		   }
				 printf("\n");
		}
 system("pause");
 
 return 0;
 }
