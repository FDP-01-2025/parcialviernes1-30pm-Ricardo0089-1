#include <iostream>
using namespace std;

int main (){
    int opcion, DUI=0, Ncuenta=0, caracteresDUI= 9, caracteresCuenta= 6, deposito, cuentabruta=0, retiro;
    
        cout << "----bienvenido a nuestro cajero automatico----"<<endl;
        cout << "----Porfacor dijite su numero de DUI sin guiones de por medio: "<<endl;
        cin >> DUI;  
    do
    {
        
        cout << "----porfavor elija una de nuestras opciones----"<<endl;
        cout << "1.Realizar deposito."<<endl;
        cout << "2.Realizr retiro."<<endl;
        cout << "3.Consultar dinero en cuenta."<<endl;
        cout << "4.salir"<<endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout <<"ingrese la cantidad a depositar: "<<endl;
            cin >> deposito;
            cuentabruta= cuentabruta + deposito;
            cout << "Deposito exitoso"<<endl;
            break;
        case 2:
            cout << "ingrese la cantidad a retirar: "<<endl;
            cin>> retiro;
            if (retiro >= cuentabruta)
            {
                cuentabruta = cuentabruta - retiro;
                cout << "Retiro exitoso."<<endl;
            }else{
                cout << "No hay fondo suficiente en la cuenta"<<endl;
                return 0;
            }
        case 3: 
        cout << "Su monto en la cuenta es de : "<<cuentabruta;
        cout << "Operacion exitosa.\n"<<endl;
        default:
            break;
        }
    } while (opcion !=4);
      cout << "Gracias por usar el programa"<<endl;


    return 0;
}