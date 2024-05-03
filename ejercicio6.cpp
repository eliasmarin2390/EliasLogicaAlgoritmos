#include <iostream>
using namespace std;

int main() {
  int suma = 0; // Variable para almacenar la suma de los números pares

  // Sumamos los números pares comprendidos entre 100 y 200
  for (int i = 100; i <= 200; i++) {
    if (i % 2 == 0) { // Si el número es par
      suma += i; // Lo sumamos a la variable suma
    }
  }

  // Mostramos la suma de los números pares
  cout << "La suma de los números pares comprendidos entre 100 y 200 es: " << suma << endl;

  return 0;
}