#include <iostream>
#include "complex.h"
#include "complexvector.h"
#include <fstream>
using namespace std;

void recursion(){
    ofstream data("ComplexSequence.txt");
    complex temp, f1(1,1), num(2,3), dem(7,5);
    data<<"{ "<< f1.real <<"+"<<f1.imag<<"i , ";
    for(size_t i = 1; i<6; i++){
        num.real*=i;
        num.imag*=i;
        dem.imag*= i*i;
        temp.div(num,dem);
        temp.mult(temp, f1);
        if(temp.imag<0) data <<temp.real<<temp.imag<<"i , ";
        else data <<temp.real<<"+"<<temp.imag<<"i , ";
        data<<" ";
        f1 = temp;
        num.real = 2;   num.imag = 3; dem.imag = 5;
    }
    data<<"}";
}

int main(){
    complex c1(2,4), c2(3,5), c3(-1,-3), c4(8,10);
    complex c5(-10,3.5), c6(4, 7.3), c7(2, -8), c8(10, -142);
    complex_vector v1(0,0),v2(0,0), sum(0,0), sub(0,0), mult(0,0), div(0,0);

    recursion();
    v1.set_value(c1,c2,c3,c4);
    cout<<"v1 = ";
    v1.display();
    
    v2.set_value(c5,c6,c7,c8);
    cout<<"v2 = ";
    v2.display();
    
    cout<<"v1 + v2 = ";
    sum = v1 + v2;
    sum.display();

    cout<<"v1 - v2 = ";
    sub = v1 - v2;
    sub.display();

    cout<<"v1 * v2 = ";
    mult = v1 * v2;
    mult.display();

    cout<<"v1 / v2 = ";
    div = v1 / v2;
    div.display();

    return 0;
}
