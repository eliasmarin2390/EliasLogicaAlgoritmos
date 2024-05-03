#include <iostream>
using namespace std;

int main() {
  int longitud; // Variable para almacenar la longitud de los vectores

  // Pedimos al usuario que ingrese la longitud de los vectores
  cout << "Ingrese la longitud de los vectores: ";
  cin >> longitud;

  int vector1[longitud]; // Vector 1
  int vector2[longitud]; // Vector 2
  int productoPunto = 0; // Variable para almacenar el producto punto

  // Pedimos al usuario que ingrese los elementos del vector 1
  cout << "Ingrese los elementos del vector 1:" << endl;
  for (int i = 0; i < longitud; i++) {
    cout << "Elemento " << i + 1 << ": ";
    cin >> vector1[i];
  }

  // Pedimos al usuario que ingrese los elementos del vector 2
  cout << "Ingrese los elementos del vector 2:" << endl;
  for (int i = 0; i < longitud; i++) {
    cout << "Elemento " << i + 1 << ": ";
    cin >> vector2[i];
  }

  // Calculamos el producto punto
  for (int i = 0; i < longitud; i++) {
    productoPunto += vector1[i] * vector2[i];
  }

  // Mostramos el resultado
  cout << "El producto punto de los vectores es: " << productoPunto << endl;

  return 0;
}