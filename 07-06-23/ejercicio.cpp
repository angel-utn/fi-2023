/**
Un famoso club de f�tbol, quiz�s el m�s grande de Latinoam�rica,
est� realizando una colecta para saldar sus deudas que ascienden
a 550000 USD.
Se solicita un programa que permita registrar cada una de las
donaciones de dinero de sus hinchas hasta que la deuda se encuentre
cancelada.
Adem�s se pide calcular e informar:
1) La recaudaci�n total de la colecta.
2) La cantidad de donaciones recibidas.
3) El monto de la donaci�n m�s generosa.
*/
#include <iostream>
using namespace std;
#include <iomanip>


int main(){
  float montoRecaudado = 0.0;
  float montoDonacion;
  float maximaDonacion = 0.0;
  int cantidadDonaciones = 0;

  while(montoRecaudado < 550000.0){
      cout << "Monto donacion: $ ";
      cin >> montoDonacion;

      montoRecaudado += montoDonacion;
      cantidadDonaciones++;

      if (montoDonacion > maximaDonacion){
        maximaDonacion = montoDonacion;
      }

  }
  cout << endl;
  cout << setprecision(2);
  cout << "Punto 1) Recaudacion    : " << std::fixed <<  montoRecaudado << endl;
  cout << "Punto 2) Cant Donaciones: " << cantidadDonaciones << endl;
  cout << "Punto 3) Mejor Donacion : " << maximaDonacion << endl;

  return 0;
}
