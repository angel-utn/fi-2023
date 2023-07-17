#include <iostream>
using namespace std;

int main(){
    int n, cantNegativos = 0, mayorDivisiblePor3 = -1, suma = 0;

    while(suma <= 1000){
        cout << "Numero: ";
        cin >> n;

        //A
        if (n < 0){
            cantNegativos++;
        }

        //B
        if (n%3 == 0){
            if (mayorDivisiblePor3 == -1 || n > mayorDivisiblePor3){
                mayorDivisiblePor3 = n;
            }
        }
    }
    cout << endl << "PUNTO A" << endl;
    cout << cantNegativos;
    cout << endl << "PUNTO B" << endl;
    cout << mayorDivisiblePor3;

    return 0;
}