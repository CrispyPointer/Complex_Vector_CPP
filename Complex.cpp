#include "complex.h"
#include <iostream>
using namespace std;

complex::complex():real(0), imag(0){}
complex::complex(double r, double i) : real(r), imag(i) {}

void complex::display(){
    if(imag<0) cout<<real<<imag<<"i "<<endl;
    else cout<<real<<"+"<<imag<<"i "<<endl;
}

void complex::add(complex c1, complex c2){
    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;
}

void complex::sub(complex c1, complex c2){
    real = c1.real - c2.real;
    imag = c1.imag - c2.imag;
}

void complex::mult(complex c1, complex c2){
    real = (c1.real*c2.real - c1.imag*c2.imag);
    imag =  (c1.imag*c2.real + c1.real*c2.imag);
}

void complex::div(complex c1, complex c2){
    real = ((c1.real*c2.real + c1.imag*c2.imag) / (c2.real*c2.real + c2.imag*c2.imag));
    imag =  ((c1.imag*c2.real - c1.real*c2.imag) / (c2.real*c2.real + c2.imag*c2.imag));
}