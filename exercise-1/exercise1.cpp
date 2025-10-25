//Escriba un programa que lea tres números enteros del teclado e imprima la suma, el promedio, el producto, el más pequeño y el más grande de estos números. El diálogo de la pantalla debería aparecer de la siguiente manera:

//```cmd
//Ingrese tres enteros diferentes: 13 27 14
//La suma is 54
//El promedio es 18
//El producto es 4914
//El más pequeño es 13
//El más grande es 27

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
    cout << "Ingrese el primer numero : " << endl; 
    cin >> num1;
    cout << "Ingrese el segundo numero(diferente al primero) : " << endl; 
    cin >> num2;
    cout << "Ingrese el tercer numero (diferente a los 2 anteriores) : " << endl; 
    cin >> num3;

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