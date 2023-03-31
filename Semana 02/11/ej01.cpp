/*
  Ingresar el nombre de un artículo, su precio unitario y la cantidad
  de unidades vendidas. Calcular e informar, el nombre del artículo
  y el importe de la venta.
*/

#include <iostream>
using namespace std;

int main(){
  string nombre;
  float precioUnitario, importeVenta, abonaCon, vuelto;
  int cantidad;

  cout << "Nombre del articulo: ";
  cin >> nombre;

  cout << "Precio unitario: $";
  cin >> precioUnitario;

  cout << "Cantidad: ";
  cin >> cantidad;

  importeVenta = cantidad * precioUnitario;
  cout << endl;
  cout << "> Articulo: " << nombre << endl;
  cout << "> Importe $ " << importeVenta << endl;

  cout << "Abona con: ";
  cin >> abonaCon;


  if (abonaCon >= importeVenta){
    vuelto = abonaCon - importeVenta;
    cout << endl << "> Vuelto $ " << vuelto << endl;
  }
  else{
    cout << endl << "Te falta platita" << endl;
  }


  return 0;
}
