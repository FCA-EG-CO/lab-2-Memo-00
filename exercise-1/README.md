# Ejercicio de laboratorio 1: Suma, Promedio, Máximo y Mínimo

## Descripción

Escriba un programa que lea tres números enteros del teclado e imprima la suma, el promedio, el producto, el más pequeño y el más grande de estos números. El diálogo de la pantalla debería aparecer de la siguiente manera:

```cmd
Ingrese tres enteros diferentes: 13 27 14
La suma es 54
El promedio es 18
El producto es 4914
El más pequeño es 13
El más grande es 27
```

## Contesta las siguientes preguntas

1. Modifique su solución para usar tres declaraciones cin separadas en lugar de una. Escribe un mensaje separado para cada cin.

2. ¿Importa si se usa < o <= al hacer comparaciones para determinar el número entero más pequeño? ¿Cuál usaste y por qué?
Si importa ya que si usamos el igual tomara el numero usado en adelante o atras dependiendo el caso, por ejemplo a<= 25 si a vale 25 o un numero menor se cumplira la condición, pero si es a < 25 si a es igual a 25 no se cumplira la condición, 
Use el "<" y ">" para comprobar cual era el numero mas grande y cual el mas pequeño

3. En el programa, probablemente usó una variable double o float para almacenar el promedio. Cambie el tipo de esa variable a entero. ¿El resultado es diferente de lo que observó anteriormente?
Con los numeros solicitados no hubo diferencia, sin embargo use numeros diferentes y el promedio lo redondea hacia abajo el resultado era 23.66666 y el programa arrojo 23

## ✅ Resultado

![Primer Resultado](./image1.png)
![Segundo Resultado](./image1.2.png)
