#include <iostream>

using namespace std;

int main() 
{
    
    unsigned int base;
    unsigned int altura;

    cout <<endl <<"Introduce la base del rectangulo: ";
    cin >> base;
    cout <<endl <<"Introduce la altura del rectangulo: ";
    cin >> altura;

    cout <<endl<<"El area es: "<<(base * altura)/2<<endl;

    return 0;
}