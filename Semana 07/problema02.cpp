/*

*/
#include <iostream>
using namespace std;

int main(){
  int dado1, dado2, puntajeRonda, puntajeAcumulado=0, rondas, diferencia;

  for(rondas=1; rondas<=5; rondas++){
    cout << "Ronda #" << rondas << endl;

    cout << "Dado: ";
    cin >> dado1;
    cout << "Dado: ";
    cin >> dado2;

    // Dados iguales con cara 1 - 6
    if (dado1 == dado2){
        if (dado1 == 1 || dado1 == 6){
          puntajeRonda = 10;
        }
        else{
          puntajeRonda = 0;
        }
    }
    // Puntaje es la diferencia absoluta
    diferencia = dado1 - dado2;
    if (dado2 > dado1){
      diferencia = diferencia * -1;
    }

    if (diferencia > 1 && diferencia < 5){
      puntajeRonda = diferencia;
    }

    // Escaleras
    if (diferencia == 1 || diferencia == 5){
      puntajeRonda = 0;
      puntajeAcumulado = 0;
    }

    cout << "Puntaje " << puntajeRonda << endl << endl;
    puntajeAcumulado = puntajeAcumulado + puntajeRonda;
  }

  cout << endl << "Puntaje final: " << puntajeAcumulado << endl;


  return 0;
}
