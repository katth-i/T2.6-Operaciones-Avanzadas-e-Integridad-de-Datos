#include <iostream>
#include<string>
using namespace std;

int main() {
    string productos[] = { "Pan","Vino","Queso","Carne","Huevos"};
    int precios[] = {1, 8, 4, 6, 5};
    string buscar  ;
    string nombre;
    cout << "Ingrese el nombre del producto: ";
    cin >> buscar;
    for (int i = 0; i < 5; i++) { 
        if (productos[i] == buscar) {
            nombre = productos[i];
            cout << "El precio es: " << precios [i] << endl;
            break;
        }
    }
    if (nombre != buscar) {
        cout << "Producto no encontrado." << endl;
    }
    return 0;
}