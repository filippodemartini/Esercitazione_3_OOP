#include <iostream>
#pragma once

using namespace std;

namespace ComplexNumberLybrary{

struct ComplexNumber
{
    double real;
    double imaginary;

    ComplexNumber()=default;


    ComplexNumber(double a, double b){
        real=a;
        imaginary=b;
    }
 };

ostream& operator <<(ostream& os, const ComplexNumber &z);
ComplexNumber operator+ (const ComplexNumber &z1, const ComplexNumber &z2);
bool operator== (const ComplexNumber &z1,const ComplexNumber &z2);
ComplexNumber conjugate(ComplexNumber &z);

}
