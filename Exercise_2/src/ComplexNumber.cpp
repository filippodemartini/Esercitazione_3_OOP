#include "ComplexNumber.hpp"
#include <cmath>

namespace ComplexNumberLybrary{




ostream& operator<<(ostream& os, const ComplexNumber &z)
{
    if(z.imaginary>0)
        (((os <<z.real)<< "+")<<z.imaginary) <<"i";

    else if(z.imaginary==0)
        os << z.real;

    else if(z.real ==0)
        (os << z.imaginary) <<"i";
    else
        ((os << z.real)<<z.imaginary) <<"i";

    return os;
}

ComplexNumber operator+(const ComplexNumber &z1,const ComplexNumber &z2)
{
    ComplexNumber z(z1.real+z2.real,z1.imaginary+z2.imaginary);
    return z;
}
bool operator ==(const ComplexNumber &z1, const ComplexNumber &z2)
{
    double tollerance=1.00e-06;
    if (abs(z1.real-z2.real)<tollerance && abs(z1.imaginary-z2.imaginary) < tollerance)
        return 1;
    else
        return 0;
}


ComplexNumber conjugate(ComplexNumber &z){
    double con=-z.imaginary;
    ComplexNumber conjugate_number (z.real,con);
    return conjugate_number;
}

}
