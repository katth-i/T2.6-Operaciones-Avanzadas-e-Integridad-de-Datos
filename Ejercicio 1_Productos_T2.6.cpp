#include <iostream>
#include<string>
using namespace std;

int main() {

    // Arreglo que almacena los nombres de los productos
    string productos[] = { "Pan","Vino","Queso","Carne","Huevos"};
    // Arreglo que almacena los precios de cada producto
    int precios[] = {1, 8, 4, 6, 5};
    // Variable donde el usuario ingresará el producto a buscar
    string buscar  ;
    string nombre;
    cout << "Ingrese el nombre del producto: ";
    cin >> buscar;
    // Recorrer el arreglo de productos
    for (int i = 0; i < 5; i++) { 
        // Verificar si el producto actual coincide con la búsqueda
        if (productos[i] == buscar) {
            nombre = productos[i];
            cout << "El precio es: " << precios [i] << endl;
            break;
        }
    }
    // Verificar si el producto no fue encontrado
    if (nombre != buscar) {
        cout << "Producto no encontrado." << endl;
    }
    return 0;
}
