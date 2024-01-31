#include <stdio.h>
#include <stdlib.h> 

//¿Cuál es el error?

int main(){

    int y,u;
    float x,z;

puts("El precio es precio"); //Necesitamos la palabra dentro del mensaje ya que es un puts
printf("Esta es una cadena (ingrese 3 valores): ");  //El printf solo imprime un mensaje, en este caso le asignaron la funcion del scanf
scanf ("%f %d %f", &x, &y, &z); //Le hacia falta el operador de direccion
printf("Ingresa un valor (decimal): "); //Al igual que el printf, asignaron funcion del scanf
scanf ("%d", &u); //Esta mal escrito "scanf"

return 0;
}