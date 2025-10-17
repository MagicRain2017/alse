#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>> triangle;

        // Primera fila
        triangle.push_back({1});

        // Generar las filas siguientes
        for (int i = 1; i < numRows; i++){
            vector<int> row(i + 1, 1);

            // Calcular los valores intermedios
            for (int j = 1; j < i; j++){
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};

int main(){
    Solution sol;
    int numRows;
    cout << "Ingrese el numero de filas: ";
    cin >> numRows;
    vector<vector<int>> result = sol.generate(numRows);
    cout << "Triangulo de Pascal con " << numRows << " filas:" << endl;
    for (auto& row : result) {
        for (auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
