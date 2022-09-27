#include <iostream>
using namespace std;

int main(void){

    int n_anterior=1, n_actual=1, n_siguiente=0;
    int n_deseado=0; 

    cout << "escribe el numero que deseas calcular para la serie de Fobonnaci: " << endl;
    cin >> n_deseado;
    cout << "0 + 1 = 1" << endl; 
    while(n_actual < n_deseado){
        n_siguiente = n_anterior + n_actual;
        cout << n_anterior << " + " << n_actual << " = " << n_siguiente << endl; 
        n_actual = n_anterior;
        n_anterior = n_siguiente; 
    }

    //cout << "el numero de la serie de Fibonnaci es: " << n_siguiente << endl; 
}