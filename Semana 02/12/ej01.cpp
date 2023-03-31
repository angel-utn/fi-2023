/*
  Ingresar el nombre de un articulo, su precio unitario y la cantidad
  de unidades vendidas. Calcular e informar, el nombre del articulo
  y el importe de la venta.
*/
#include <iostream>
using namespace std;

int main(){
  string nombreArticulo;
  float precioUnitario, importeVenta, abonaCon, vuelto;
  int cantidad;

  cout << "Nombre del articulo: ";
  cin >> nombreArticulo;
  cout << "Precio unitario: $";
  cin >> precioUnitario;
  cout << "Cantidad: ";
  cin >> cantidad;

  importeVenta = precioUnitario * cantidad;
  cout << endl;
  cout << nombreArticulo << " x " << cantidad << endl;
  cout << "Total a pagar $ " << importeVenta;

  cout << endl << "Abona con: $";
  cin >> abonaCon;

  vuelto = abonaCon - importeVenta;
  if (abonaCon >= importeVenta){
    cout << endl << "Vuelto $ " << vuelto;
  }
  else{
    cout << "Te falta " << vuelto * -1 ;
  }




  return 0;
}
