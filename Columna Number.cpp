#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int resultado = 0;

        for (int i = 0; i < columnTitle.length(); i++) {
            char letra = columnTitle[i];

            // Convertimos la letra a número (A=1, B=2, ..., Z=26)
            int valor = (letra - 'A') + 1;

            // Desplazamos el resultado anterior una "posición base 26"
            resultado = resultado * 26 + valor;
        }

        return resultado;
    }
};

int main() {
    Solution sol;

    string ejemplo1 = "A";
    string ejemplo2 = "AB";
    string ejemplo3 = "ZY";

    cout << "Ejemplo 1 (" << ejemplo1 << ") -> " << sol.titleToNumber(ejemplo1) << endl;
    cout << "Ejemplo 2 (" << ejemplo2 << ") -> " << sol.titleToNumber(ejemplo2) << endl;
    cout << "Ejemplo 3 (" << ejemplo3 << ") -> " << sol.titleToNumber(ejemplo3) << endl;

    return 0;
}
