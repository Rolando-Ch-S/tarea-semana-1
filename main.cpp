/* Dado los valores ingresados por el usuario (base, altura) calcular y mostrar en pantalla el área
de un triángulo.*/
#include <iostream>
using namespace std;

int main() {
 float n1, n2, area;
    cout << "\nPrográma para calcular el área de un triangulo: ";//función del Prográma
    cout << "\nIngrese la base del triangulo: ";
    cin >> n1 ;
    cout << "\nIngrese la altura del triangulo: ";
    cin >> n2;
    area = n1 * n2 / 2;   //formula del area de un triangulo
    cout << "El área del triangulo es: " << area;
    return 0;
}