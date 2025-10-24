#include <iostream>
using namespace std;

int main () {

    int num1;
    int num2;
    int num3;
    int sum;
    float prom;
    float producto;
    
  //Ingresar los numeros y suma
    cout << "Ingrese tres numeros enteros diferentes: "; 
    cin >> num1 >> num2 >> num3 ;

    sum = num1 + num2 + num3;

    cout << "La suma es: " << sum << endl;

  //Obtener el promedio
    prom = sum / 3;

    cout << "El promedio es:" << prom << endl;


   //Obtener el producto (Multiplición)
    producto = num1 * num2 * num3;

    cout << "El producto es:" << producto << endl;

    int menor = num1;
    int mayor = num1;

    // Encontrar el menor
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;

    // Encontrar el mayor
    if (num2 > mayor) mayor = num2;
    if (num3 > mayor) mayor = num3;

    cout << "El mas pequeño es: " << menor << endl;
    cout << "El mas grande es: " << mayor << endl;

    return 0;

}