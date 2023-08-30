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
  float importe, totalGeneral =0, presupuesto;

  string nombreCategoriaMax;
  float totalMax;
  int sinMovimientos=0; 
  cout << "ingrese su presupuesto: ";
  cin >> presupuesto;
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

  /// Calcular el máximo y la categoría asociada
  totalMax = totalGastosCategoria[0];

  for(i=1; i<10; i++){
    if (totalGastosCategoria[i] > totalMax){
      totalMax = totalGastosCategoria[i];
    }
  }

  cout << "A) Gasto maximo: " << totalMax << endl;
  cout << "Categorias: ";

  for(i=0; i<10; i++){
    if (totalGastosCategoria[i] == totalMax){
      cout << nombresCategorias[i] << " ";
    }
  }

  cout << endl << "B) Total general: $ " << totalGeneral << endl;
  for(i=0; i<10; i++){
    float porcentaje = totalGastosCategoria[i]*100/totalGeneral;
    cout << nombresCategorias[i] << " : " << porcentaje << " %" << endl;
  }

  for (i=0;i<10;i++){
    if(totalGastosCategoria[i]==0){
      sinMovimientos++;
    }
  }
  cout << "Categoria sin movientos: " << sinMovimientos;

  if (totalGeneral < presupuesto) cout << endl << "Total por debajo del presupuesto.";
  if (totalGeneral == presupuesto) cout << endl << "Total igual al presupuesto.";
  if (totalGeneral > presupuesto) cout << endl << "Total fuera de presupuesto.";

  // Faltan resolver los puntos A, B y D


  return 0;
}
