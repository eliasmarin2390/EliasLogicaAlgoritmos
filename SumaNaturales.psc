Algoritmo SumaNaturales
    // Declaraci�n de variables
    Definir n, suma, i Como Entero;
    
    // Solicitar al usuario que ingrese el valor de n
    Escribir "Ingrese un n�mero natural n:";
    Leer n;
    
    // Inicializar la variable suma en 0
    suma <- 0;
    
    // Calcular la suma de los n�meros naturales desde 1 hasta n
    Para i <- 1 Hasta n Con Paso 1 Hacer
        suma <- suma + i;
    FinPara
    
    // Mostrar el resultado
    Escribir "La suma de los n�meros naturales desde 1 hasta ", n, " es: ", suma;
    
FinAlgoritmo

