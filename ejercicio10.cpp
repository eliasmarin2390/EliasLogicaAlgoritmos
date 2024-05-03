#include <iostream>

using namespace std;

int main() {
  int filas, columnas;

  // Pedimos al usuario que ingrese las dimensiones de la matriz
  cout << "Ingrese el número de filas de la matriz: ";
  cin >> filas;
  cout << "Ingrese el número de columnas de la matriz: ";
  cin >> columnas;

  // Creamos la matriz
  int matriz[filas][columnas];

  // Pedimos al usuario que ingrese los elementos de la matriz
  cout << "Ingrese los elementos de la matriz:" << endl;
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
      cin >> matriz[i][j];
    }
  }

  // Calculamos la transpuesta de la matriz
  int matrizTranspuesta[columnas][filas];

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      matrizTranspuesta[j][i] = matriz[i][j];
    }
  }

  // Mostramos la matriz transpuesta
  cout << "La matriz transpuesta es:" << endl;
  for (int i = 0; i < columnas; i++) {
    for (int j = 0; j < filas; j++) {
      cout << matrizTranspuesta[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}