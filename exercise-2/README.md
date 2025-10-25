# Ejercicio de laboratorio 2 – Múltiplos

## Descripción

Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. [Sugerencia: use el operador de módulo.]

```cmd
Ingrese dos enteros: 22 8
22 no es un múltiplo de 8
```

## Contesta las siguientes preguntas

1. ¿Se puede utilizar el operador de módulo con operandos no enteros? ¿Se puede usar con números negativos? Supongamos que el usuario ha introducido los siguientes conjuntos de números. Para cada serie, ¿qué produce en la tercera columna? Si hay un error, explique por qué.
El operador módulo no se puede usar con operandos no enteros; si se pueden utilizar numero negativos y en el tercer caso no es posible ya que un error de matematicas es el dividir entre "0"

   | Entero 1 | Entero 2 | Expresión        | Salida |
   | -------- | -------- | ---------------- | ------ |
   | 73       | 22       | cout << 73 % 22; | No es múltiplo       |
   | 0        | 100      | cout << 0 % 100; | Si es múltiplo       |
   | 100      | 0        | cout << 100 % 0; | error                |
   | -3       | 3        | cout << -3 % 3;  | Si es múltiplo       |
   | 9        | 4.5      | cout << 9 % 4.5; | No es múltiplo       |
   | 16       | 2        | cout << 16 % 2;  | Si es múltiplo       |

2. ¿Qué pasa si colocamos un punto y coma (;) después del final de la expresión de condición de una declaración if?
Hay un error ya que no estamps diciendo que hara el if en caso de ser verdadero, se le conoce como error lógico

3. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.]

## ✅ Resultado

![Primer Resultado](./image2.png)
![Segundo Resultado](./image2.2.png)
