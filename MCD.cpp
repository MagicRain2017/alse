#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //Solicitar numeros
    int num1, num2;
    cout << "Ingrese el valor del primer numero: ";
    cin >> num1;
    cout << "Ingrese el valor del segundo numero: ";
    cin >> num2;
    cout << "\n";
    bool MCD = false;
    if (num1 > 0 && num2 > 0 && num1 != num2){
        if (num1 > num2){
            int aux = num1;
            num1 = num2;
            num2 = aux;
        }
        int i = num1;
        while (!MCD && i >= 1){
            if (num1 % i == 0 && num2 % i == 0){
                cout << "El maximo comun divisor (MCD) es: " << i << endl;
                MCD = true;
            }
            else{
                i--;
            }
        }
    }
    else{
        if (num1 == num2){
            cout << "Los numeros ingresados son iguales";
        }
        else{
            cout << "Los numeros ingresados son negativos";
        }
    }
}