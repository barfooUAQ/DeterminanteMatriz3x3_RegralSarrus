/*EJERCICIO 6: Realizar un programa para calcular el determinante de una matriz 3*3*/
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j;
  float matriz[3][3],auxiliar[3][5],productoDiagonal,determinante;
  printf("Proporcione los valores de las posiciones de la Matriz\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("Matriz[%d][%d]: ",i+1,j+1);
      scanf("%f",&matriz[i][j]);
    }
  }
  system("cls");
  //Agregando las primeras 2 columnas,despues de la ultima columna
  for(i=0;i<3;i++){
    for(j=0;j<5;j++){
      if(j<3) auxiliar[i][j]=matriz[i][j];
      else auxiliar[i][j]=matriz[i][j-3];
    }
  }
  determinante=0;
  for(i=0;i<6;i++){
    productoDiagonal=1;
    for(j=0;j<3;j++){
      if(i<3){productoDiagonal*=auxiliar[j][j+i];}
      else{productoDiagonal*=(-1*auxiliar[j][i-(j+1)]);}
    }
    determinante+=productoDiagonal;
  }
  printf("Matriz proporcionada:\n\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%.2f\t",matriz[i][j]);
    }
    printf("\n\n");
  }
  printf("............................\n");
  printf("Determinante= %.2f\n",determinante );
  printf("............................\n");
}
