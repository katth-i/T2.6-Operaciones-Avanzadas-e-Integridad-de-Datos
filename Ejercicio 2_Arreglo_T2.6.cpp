#include <iostream>   // Librería para entrada y salida de datos
#include <string>     // Librería para manejo de cadenas
using namespace std;

int main() {

    // Arreglo que almacena números enteros
    int numeros[] = {10, 8, 9, 7, 6};

    // Arreglo que almacena las posiciones
    int posicion[] = {0, 1, 2, 3, 4};

    // Ciclo for para recorrer los arreglos
    for (int i = 0; i < 5; i++) {

        // Mostrar en pantalla la posición y el número correspondiente
        cout << "Posicion: " << posicion[i]
             << " Numero: " << numeros[i] << endl;
    }

    // Finaliza el programa correctamente
    return 0;
}

/*
    IMPORTANTE:

    Si el ciclo supera el tamaño del arreglo, por ejemplo:

        for (int i = 0; i <= 6; i++)

    El programa intentará acceder a posiciones que no existen,
    como numeros[5] o numeros[6].

    Esto puede provocar:
    - Desbordamiento de memoria (buffer overflow)
    - Errores inesperados
    - Cierre del programa
*/