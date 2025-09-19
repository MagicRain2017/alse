#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //Solicitar datos al usuario
    double P, r;
    int n, t;
    cout << "Ingrese el principal (P): ";
    cin >> P;
    cout << "Ingrese la tasa de interes anual en decimal (r): ";
    cin >> r;
    cout << "Ingrese el número de veces que se aplica el interes al año (n): ";
    cin >> n;
    cout << "Ingrese el número de años (t): ";
    cin >> t;
    //Calculo monto final
    double A = P * pow(1 + (r / n), n * t);
    cout << "El monto final (A) del interes compuesto es: " << A << endl;
    return 0;
}