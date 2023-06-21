#include <iostream>
using namespace std;

int main(){
  const int MESES = 3;
  int mes, dia, cantidad;
  float importe;

  // A
  float totalMes;
  // B
  float importeMensualMaximo;
  int diaDelImporteMaximo;
  // C
  int cantidadDias = 0;

  for(mes=1; mes<=MESES; mes++){
    totalMes = 0;
    importeMensualMaximo = 0;
    cout << "MES: " << mes << endl;
    cout << "DIA: ";
    cin >> dia;
    while(dia != 0){
      cout << "BOLETAS: ";
      cin >> cantidad;
      cout << "IMPORTE: $";
      cin >> importe;

      // A - Total vendido en el mes
      totalMes = totalMes + importe;

      // B
      if (importe > importeMensualMaximo){
        importeMensualMaximo = importe;
        diaDelImporteMaximo = dia;
      }
      // C
      if (cantidad < 16){
        cantidadDias++;
      }

      cout << "DIA: ";
      cin >> dia;
    }

    cout << "A) Total recaudado en mes " << mes << " es $ " << totalMes << endl;
    cout << "B) Maxima recaudacion del mes " << mes << " es $ " << importeMensualMaximo;
    cout << " el dia " << diaDelImporteMaximo << endl;

  }

  cout << "C) Cantidad de dias con menos de 16 boletas son: " << cantidadDias << endl;

  return 0;
}
