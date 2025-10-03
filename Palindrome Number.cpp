#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Casos especiales
        if (x < 0) return false;                 // negativos nunca son palíndromos
        if (x != 0 && x % 10 == 0) return false; // si termina en 0 y no es 0, tampoco

        int original = x;
        long reversed = 0; // usar long para evitar overflow temporal

        while (x > 0) {
            int digit = x % 10;          // tomar último dígito
            reversed = reversed * 10 + digit; // construir número invertido
            x /= 10;                     // eliminar el último dígito
        }

        return original == reversed;
    }
};

int main() {
    Solution sol;
    int x;

    cout << "Ingrese un numero: ";
    cin >> x;

    if (sol.isPalindrome(x)) {
        cout << x << " es un palindromo." << endl;
    } else {
        cout << x << " no es un palindromo." << endl;
    }

    return 0;
}
