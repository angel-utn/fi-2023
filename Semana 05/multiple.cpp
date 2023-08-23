///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///Hacer un programa que haga lo siguiente:
///    A) si se ingresa un 1, que imprima "HOLA"
///    B) si se ingresa un 2, que imprima "QUE TAL"
///    C) si se ingresa un 3, que imprima "CHAU"
int main(){
    int var;
    cout<<"INGRESE UN NUMERO ";
    cin>>var;
    switch(var){
        case 1: cout<<"HOLA";
                break;
        case 2: cout<<"QUE TAL";
                break;
        case 3: cout<<"CHAU";
                break;
        default:cout<<"NO SE INGRESO NI 1, NI 2, NI 3";
                break;
    }
	cout<<endl;
	system("pause");
	return 0;
}
