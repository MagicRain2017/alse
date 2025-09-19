#include <iostream>
int main() {
    int arreglo[5] = {10, 25, 12, 9, 46};
    int suma = 0;
    for (int i = 0; i <5; i++){
    suma += arreglo[i];
}
std::cout<<"La suma de los elementos del arreglo es: "<<suma<<std::endl;
return 0;
}