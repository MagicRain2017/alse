#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimo = 1000000000;  // valor muy grande inicial
        int maximoBeneficio = 0;  // ganancia inicial es cero

        for (int i = 0; i < prices.size(); i++) {
            int precioActual = prices[i];

            // Si el precio actual es menor al mínimo visto, lo actualizamos
            if (precioActual < minimo) {
                minimo = precioActual;
            }
            // Si no, calculamos la posible ganancia al vender hoy
            else {
                int ganancia = precioActual - minimo;

                // Si la ganancia actual supera la máxima, actualizamos
                if (ganancia > maximoBeneficio) {
                    maximoBeneficio = ganancia;
                }
            }
        }

        return maximoBeneficio;
    }
};

int main() {
    Solution sol;
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};

    cout << "Ejemplo 1 -> Maximo beneficio: " << sol.maxProfit(prices1) << endl;
    cout << "Ejemplo 2 -> Maximo beneficio: " << sol.maxProfit(prices2) << endl;

    return 0;
}
