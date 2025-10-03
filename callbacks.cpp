#include <iostream>
#include <functional>
#include <string>
#include <cstdlib>

using std::cerr;
using std::cout;
using std::endl;
using std::function;
using std::string;

double suma(double a, double b)       { return a + b; }
double resta(double a, double b)      { return a - b; }
double multiplicar(double a, double b){ return a * b; }
double dividir(double a, double b)    { return a / b; } // validar /0 afuera

void imprimirUso(const string& nombreEjecutable){
    cerr << "Uso: ./" << nombreEjecutable << " <num1> <operador> <num2>" << endl
         << "Operadores permitidos: +  -  *  x  /" << endl
         << "Ejemplo: ./" << nombreEjecutable << " 2.5 + 5" << endl;
}

bool aDouble(const string& s, double& out){
    try{
        size_t idx = 0;
        out = std::stod(s, &idx);
        return idx == s.size();
    }catch(const std::exception&){
        return false;
    }
}

bool seleccionarOperacion(const string& op, function<double(double,double)>& fn){
    if(op == "+"){ fn = suma; return true; }
    if(op == "-"){ fn = resta; return true; }
    if(op == "*" || op == "x" || op == "X"){ fn = multiplicar; return true; }
    if(op == "/"){ fn = dividir; return true; }
    return false;
}

int main(int argc, char* argv[]){
    if(argc != 4){
        imprimirUso(argv[0]);
        return 1;
    }

    string sA = argv[1];
    string op = argv[2];
    string sB = argv[3];

    double a = 0.0, b = 0.0;
    if(!aDouble(sA, a) || !aDouble(sB, b)){
        cerr << "Ha ingresado valores inadecuados para el programa." << endl;
        imprimirUso(argv[0]);
        return 2;
    }

    function<double(double,double)> operacion;
    if(!seleccionarOperacion(op, operacion)){
        cerr << "Operador no reconocido: \"" << op << "\"." << endl;
        imprimirUso(argv[0]);
        return 3;
    }

    if(op == "/" && b == 0.0){
        cerr << "Error: division por cero." << endl;
        return 4;
    }

    double resultado = operacion(a, b);
    cout.setf(std::ios::fixed);
    cout.precision(10); 
    cout << "El resultado de la operacion es " << resultado << endl;
    return 0;
}
