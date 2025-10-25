//Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. 
//[Sugerencia: use el operador de módulo.]

#include <iostream>
using namespace std; 

int main() {
    int num;

    cout << "Introduce un número entero: ";
    cin >> num;

    //Determinar si es par o impar 
    if (num % 2 == 0) {
        
        cout << "Resultado: El número " << num << " es PAR." << endl;
    } else {
       
        cout << "Resultado: El número " << num << " es IMPAR." << endl;
    }

    return 0;
}