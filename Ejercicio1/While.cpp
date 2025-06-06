#include <iostream>
using namespace std;

int main (){
    //Determinamos la variable
    int numero = 0, verificacion;
    //Planteamos el bucle en un do while
    do
    {
        cout << "Porfavor ingrese un numero positivo y entero: "<<endl; // pedimos el numero
        cin>> numero;
        verificacion = numero/2;
    } while (numero <0 && verificacion !=0); //Si el numero ingresado es menor a 0 se repetira, asi como si el resultado de verificacion es diferente de 0 este se repetira.

    cout << "El numero "<<numero<< "Es par"; //Si todo funciona imprimira el numero 
    return 0;
}