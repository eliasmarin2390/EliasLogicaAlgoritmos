Algoritmo SumaNaturales
    // Declaración de variables
    Definir n, suma, i Como Entero;
    
    // Solicitar al usuario que ingrese el valor de n
    Escribir "Ingrese un número natural n:";
    Leer n;
    
    // Inicializar la variable suma en 0
    suma <- 0;
    
    // Calcular la suma de los números naturales desde 1 hasta n
    Para i <- 1 Hasta n Con Paso 1 Hacer
        suma <- suma + i;
    FinPara
    
    // Mostrar el resultado
    Escribir "La suma de los números naturales desde 1 hasta ", n, " es: ", suma;
    
FinAlgoritmo

