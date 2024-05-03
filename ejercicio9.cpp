#include <iostream>

using namespace std;

int main() {
  int filasMatriz1, columnasMatriz1, filasMatriz2, columnasMatriz2;

  // Pedimos al usuario que ingrese las dimensiones de la matriz 1
  cout << "Ingrese el número de filas de la matriz 1: ";
  cin >> filasMatriz1;
  cout << "Ingrese el número de columnas de la matriz 1: ";
  cin >> columnasMatriz1;

  // Pedimos al usuario que ingrese las dimensiones de la matriz 2
  cout << "Ingrese el número de filas de la matriz 2: ";
  cin >> filasMatriz2;
  cout << "Ingrese el número de columnas de la matriz 2: ";
  cin >> columnasMatriz2;

  // Verificamos si las dimensiones son compatibles para la multiplicación
  if (columnasMatriz1!= filasMatriz2) {
    cout << "Error: Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
    return 1;
  }

  // Creamos las matrices
  int matriz1[filasMatriz1][columnasMatriz1];
  int matriz2[filasMatriz2][columnasMatriz2];
  int matrizResultado[filasMatriz1][columnasMatriz2];

  // Pedimos al usuario que ingrese los elementos de la matriz 1
  cout << "Ingrese los elementos de la matriz 1:" << endl;
  for (int i = 0; i < filasMatriz1; i++) {
    for (int j = 0; j < columnasMatriz1; j++) {
      cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
      cin >> matriz1[i][j];
    }
  }

  // Pedimos al usuario que ingrese los elementos de la matriz 2
  cout << "Ingrese los elementos de la matriz 2:" << endl;
  for (int i = 0; i < filasMatriz2; i++) {
    for (int j = 0; j < columnasMatriz2; j++) {
      cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
      cin >> matriz2[i][j];
    }
  }

  // Realizamos la multiplicación de matrices
  for (int i = 0; i < filasMatriz1; i++) {
    for (int j = 0; j < columnasMatriz2; j++) {
      matrizResultado[i][j] = 0;
      for (int k = 0; k < columnasMatriz1; k++) {
        matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
      }
    }
  }

  // Mostramos la matriz resultante
  cout << "La matriz resultante es:" << endl;
  for (int i = 0; i < filasMatriz1; i++) {
    for (int j = 0; j < columnasMatriz2; j++) {
      cout << matrizResultado[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}