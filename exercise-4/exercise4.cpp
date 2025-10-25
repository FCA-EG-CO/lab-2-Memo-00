// Escriba un programa de C ++ que lea tres números del teclado y encuentre el número del medio entre los tres números. 
//Suponga que los tres números son diferentes. 
//[Sugerencia: encuentre primero los valores más grandes y más pequeños.]

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int menor;
    int mayor;
    int medio;

    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;
    cout << "Introduce el tercer número: ";
    cin >> num3;

    

    // Encontrar el menor y el mayor
    menor = num1;
    mayor = num1;

    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;

    if (num2 > mayor) mayor = num2;
    if (num3 > mayor) mayor = num3;

    // Encontrar el número del medio 
    // Sumamos todo y restamos los extremos que ya encontramos.
    int sum = num1 + num2 + num3;
    medio = sum - mayor - menor;

    cout << "El número más pequeño es: " << menor << endl;
    cout << "El número más grande es: " << mayor << endl;
    cout << "El número del medio es: " << medio << endl;

    return 0;
}