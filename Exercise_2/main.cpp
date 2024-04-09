#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    cout << "stampa dei numeri complessi: " << endl;
    ComplexNumberLybrary::ComplexNumber z1(1,2);

    cout << "primo numero complesso= " <<z1 << endl;

    ComplexNumberLybrary::ComplexNumber z2(1,-2);

    cout << "secondo numero complesso= " <<z2 << endl;

    ComplexNumberLybrary::ComplexNumber sum=z1+z2;
    cout << "La somma dei due numeri complessi risulta essere: " << sum << endl;

    ComplexNumberLybrary::ComplexNumber z= conjugate(z1);
    cout << "Il coniugato del primo numero complesso risulta essere: " <<z<<endl;

    cout << "Confronto tra due numeri complessi: " << endl;
    bool result=ComplexNumberLybrary::operator==(z1,z2);
    if (result==1) {
        cout << "I due numeri " <<z1 << z2 <<" sono uguali"<<endl; }
    else{
        cout <<"I due numeri " <<z1 <<z2 << " non sono uguali" << endl;
        }



    return 0;
}
