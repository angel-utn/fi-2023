///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int valorBillete;

    cout << "Ingresar valor del billete en pesos: ";
    cin >> valorBillete;

    switch(valorBillete){
        case 10:
            cout << "Belgrano";
        break;
        case 20:
            cout << "Rosas" << endl;
            cout << "Guanaco";
        break;
        case 50:
            cout << "Sarmiento" << endl;
            cout << "Islas Malvinas" << endl;
            cout << "Condor" << endl;
        break;
        case 100:
            cout << "Roca" << endl;
            cout << "Eva Peron" << endl;
            cout << "Taruca" << endl;
        break;
        case 200:
            cout << "Ballena" << endl;
        break;
        case 500:
            cout << "Yaguarete" << endl;
        break;
        case 1000:
            cout << "Hornero" << endl;
        break;
        default:
            cout << "Te dieron uno trucho";
            break;
    }

	cout<<endl;
	system("pause");
	return 0;
}
