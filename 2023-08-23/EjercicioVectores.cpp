/**
Una persona desea registrar los gastos realizados durante un mes.
Ha definido que los gastos se pueden categorizar en:

ID  Nombre
----------------------
1   Servicios
2   Alimentación
3   Limpieza
4   Transporte
5   Educación
6   Salud
7   Ocio
8   Impuestos
9   Vestimenta
10  Inversiones

Por cada gasto registrado se ingresa el siguiente registro:
- Dia (numero entero)
- Mes (numero entero)
- ID de Categoria de gasto (numero entero)
- Importe del gasto (numero real)

Nos solicitan hacer un programa que permita cargar el prespuesto mensual y
cada uno de los gastos y elaborar una serie de reportes.
La informacion no se encuentra agrupada ni ordenada. No se saben de antemano
cuantos registros de gastos habra.
El fin de la carga de informacion se indica con un dia igual a cero.

Calcular e informar:
A) La categoria de gasto que mayor dinero se haya destinado y
cual es dicha categoria.
B) Por cada categoria de gasto, el nombre de la categoria y el porcentaje
que representa con respecto al total gastado en el mes.
C) La cantidad de categorias de gasto que no hayan registrado movimientos.
D) Una leyenda que indique "Por encima del presupuesto", "Igual al presupuesto" o
"Por debajo del presupuesto" en relación al presupuesto mensual y el total gastado.
*/
#include <iostream>
using namespace std;

int main(){
  /*
    Vectores: Índice en base 0, Tamaño conocido, Elementos homogéneos
    ------------------------------------------------------------------
    Primer elemento --> totalGastos[0]
    Último elemento --> totalGastos[9]
  */
  float totalGastosCategoria[10] = {};
  string nombresCategorias[10] = {
    "Servicios",
    "Alimentación",
    "Limpieza",
    "Transporte",
    "Educación",
    "Salud",
    "Ocio",
    "Impuestos",
    "Vestimenta",
    "Inversiones"
  };
  int idCategoria, dia, mes, i;
  float importe, totalGeneral =0;

  cout << "Dia: ";
  cin >> dia;

  while (dia != 0){
    cout << "ID Categoria: ";
    cin >> idCategoria;
    cout << "Mes: ";
    cin >> mes;
    cout << "Importe: $";
    cin >> importe;

    totalGeneral += importe;
    totalGastosCategoria[idCategoria-1] += importe;

    cout << "Dia: ";
    cin >> dia;
  }

  cout << "B) Total general: $ " << totalGeneral << endl;
  for(i=0; i<10; i++){
    float porcentaje = totalGastosCategoria[i]*100/totalGeneral;
    cout << nombresCategorias[i] << " : " << porcentaje << " %" << endl;
  }

  // Faltan resolver los puntos A, B y D


  return 0;
}
