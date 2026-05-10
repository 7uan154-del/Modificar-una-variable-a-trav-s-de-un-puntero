// Modificar una variable a través de un puntero.

#include <iostream> // Incluye la librería estándar para permitir la entrada y salida de datos por consola.

using namespace std; // Evita tener que escribir "std::" antes de comandos como cout o endl.

int main() { // Inicia la función principal donde se ejecuta el programa.

    int miNumero = 50; // Declara una variable entera llamada 'miNumero' y la inicializa con el valor 50.

    int* ptr = &miNumero; // Declara un puntero a entero llamado 'ptr' y le asigna la dirección de memoria de 'miNumero'.

    cout << "Valor inicial de la variable: " << miNumero << endl; // Muestra en pantalla el valor original que tiene la variable (50).

    *ptr = 100; // Accede al espacio de memoria apuntado por 'ptr' y cambia su contenido al nuevo valor de 100.

    cout << "Valor modificado a traves del puntero: " << miNumero << endl; // Muestra la variable original para confirmar que su valor cambio a 100.

    return 0; // Finaliza la ejecución de la función main devolviendo exitosamente el valor 0.
} // Cierra el bloque de código de la función principal.