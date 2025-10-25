#include <iostream>
using namespace std;

int main() {
    int fx; 

    // Usamos '\t' (carácter de tabulación) para separar las columnas
    cout << "x \t f(x)" << endl; 
    cout << "***********" << endl;

    for (int x = 0; x <= 5; x++) {
        
        // Calcular f(x)
        fx = (x * x * x) - (x * x) + 5;
        cout << x << "\t" << fx << endl;
    }


    return 0;
}