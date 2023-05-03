///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>
using namespace std;

int main(){
    char colorSemaforo;

    cout << "Color del semaforo (R-Rojo, A-Amarillo, V-Verde): ";
    cin >> colorSemaforo;

    switch (colorSemaforo){
        case 'R':
        case 'r':
            cout << "No cruzar";
            break;
        case 'A':
        case 'a':
            cout << "Apurate o quedate y cruzas despues";
            break;
        case 'V':
        case 'v':
            cout << "Avanzar";
            break;
        default:
            cout << "No anda el semaforo, cuidado!";
            break;
    }

	cout<<endl;
	system("pause");
	return 0;
}
