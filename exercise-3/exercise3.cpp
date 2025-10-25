#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    int numero;

    cout << "Introduce el primer dígito: ";
    cin >> n1;

    cout << "Introduce el segundo dígito: ";
    cin >> n2;

    cout << "Introduce el tercer dígito: ";
    cin >> n3;

    //Combinar los dígitos usando matemática
    // Ejemplo: Si d1=4, d2=2, d3=3
    // (4 * 100) + (2 * 10) + 3
    // 400 + 20 + 3 = 423
    numero = (n1 * 100) + (n2 * 10) + n3;

    cout << "El número combinado es: " << numero << endl;

    return 0;
}