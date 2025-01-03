/*en este programa voy a crear una calculadora usando funciones y switch*/

#include<iostream>
using namespace std;


void intro();
void suma();
void resta();
void multiplicacion();
void division();

float num1, num2;

int main()
{
    char operacion;

    intro();
   
    cin>>operacion;

    switch (operacion)
    {
    case '+' :
        cout<<"ingrese los numeros que quiere sumar"<<endl;
        cout<<"ingrese el primero :";
        cin>>num1;
        cout<<"ingrese el segundo :";
        cin>>num2;
        suma();
        break;

    case '-' :
        cout<<"ingrese los numeros que quiere restar"<<endl;
        cout<<"ingrese el primero :";
        cin>>num1;
        cout<<"ingrese el segundo :";
        cin>>num2;
        resta();
        break;
    case '*' :
        cout<<"ingrese los numeros que quiere multiplicar"<<endl;
        cout<<"ingrese el primero :";
        cin>>num1;
        cout<<"ingrese el segundo :";
        cin>>num2;
        multiplicacion();
        break;
    case '/' :
        cout<<"ingrese los numeros que quiere dividir"<<endl;
        cout<<"ingrese el primero :";
        cin>>num1;
        cout<<"ingrese el segundo :";
        cin>>num2;
        division();
        break;
    default:
        cout<<"entrada incorrecta";
        break;
    }


    cin.get ();
    return 0;
}
void intro()
{
    cout<<"ESTO ES UNA CALCULADORA"<<endl;
    cout<<"ingrese el tipo de operacion que desea hacer"<<endl;
    cout<<"para suma ingrese (+) y  enter"<<endl;
    cout<<"para resta ingrese (-) y  enter"<<endl;
    cout<<"para multiplicacion ingrese (*) y  enter"<<endl;
    cout<<"para division ingrese (/) y  enter"<<endl;
}
void suma()
{
cout<<"la suma es :"<<num1+num2<<endl;
}
void resta()
{
cout<<"la resta es :"<<num1-num2<<endl;
}
void multiplicacion()
{
cout<<"la multiplicacion es :"<<num1*num2<<endl;
}
void division()
{
    if (num2!=0)
    {
        cout<<"la division es :"<<num1/num2<<endl;
    }
    else
    {
        cout<<"error matematico"<<endl;
    }
}