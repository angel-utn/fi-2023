///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, cont=0;
    char letra;
    for(i=1;i<=5;i++){
            cout<<"Ingrese un caracter ";
            cin>>letra;
            if(letra=='a'){
                cont++;
            }

    }
    cout<<cont;
	cout<<endl;
	system("pause");
	return 0;
}
