///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, codigo, codigoMaximo;
    float precio, precioMinimo, precioMaximo=0;
    for(i=1;i<=5;i++){
        cout<<"CODIGO ";
        cin>>codigo;
        cout<<"PRECIO ";
        cin>>precio;
        if(precio>precioMaximo){
            precioMaximo=precio;
            codigoMaximo=codigo;
        }

    }
    cout<<"CODIGO DEL ARTICULO MAS CARO "<<codigoMaximo;
	cout<<endl;
	//cout<<"PRECIO DEL ARTICULO MAS BARATO "<<precioMinimo;
	system("pause");
	return 0;
}
