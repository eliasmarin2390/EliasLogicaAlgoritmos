#include <iostream>
using namespace std;

int main() {
  int notas[10]; // Creamos un arreglo para almacenar las notas de los 10 estudiantes
  int suma = 0; // Variable para almacenar la suma de las notas
  float promedio; // Variable para almacenar el promedio general

  // Pedimos al usuario que ingrese las notas de los 10 estudiantes
  for (int i = 0; i < 10; i++) {
    cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
    cin >> notas[i];
    suma += notas[i]; // Sumamos la nota al total
  }

  // Calculamos el promedio general
  promedio = (float)suma / 10;

  // Mostramos el promedio general
  cout << "El promedio general de la sección es: " << promedio << endl;

  return 0;
}