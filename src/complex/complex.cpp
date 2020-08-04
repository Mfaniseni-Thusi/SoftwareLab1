// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace

int main(){
    using complexType = complex<float>; // Used aliasing HERE
    complexType num1{ 2.0, 2.0 }; // using C++11 uniform initialisation syntax
    complexType num2{ 4.0, -2.0 }; // old syntax: complex<float> num2(4.0,-2.0);
    auto answer = num1 * num2; // using C++11 auto keyword,
    // answer is of type: complex<float>

    cout << "The answer is: " << answer << endl;
    cout << "Or in a more familiar form: " << answer.real() << " + " <<
    answer.imag() << "j" << endl;
    // answer++;
    return 0;
}


//the commented line will not work because it is gcc compiler
// ignores every text that comes after "//" in c++
