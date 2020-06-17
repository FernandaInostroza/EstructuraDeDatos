/* crear funcion promedio() que retorne el promedio de los elementos de la lista*/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]){

  float media;
  /*struct lista *L = crear();*/
  struct lista *L; //se decidio hacer el cambio ya que no compilaba
  L = constructor();
  L= constructor();
  L= insertar(10,0,L);
  L= insertar(20,1,L);
  L= insertar(30,2,L);
  L= insertar(40,3,L);
  mostrar(L);
  media = promedio(L);
  printf("El promedio de la lista es: %f \n", media);
  return 0;
}
/*---------------Funcion promedio-----------------*/
void promedio(){
	
  int suma=0, promedio=0, i, cont=0;
//ciclo que recorre la lista	
  for(i=0, i<L->ultimo;i++){
    /*suma los valores*/
    suma = suma + L->arreglo[i];
    /*contador cant de valores*/
    cont = i+1;
  }
  promedio = suma/cont;
  return L;
}
