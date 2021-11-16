#include "ComplexVector.h"
#include <vector>
#include <iostream>
#include <iomanip>

complex_vector::complex_vector(double r, double i){
    real = r;
    imag = i;
}

void complex_vector::set(complex c1){
    v.push_back(c1);
}

void complex_vector::set_value(complex c1, complex c2, complex c3, complex c4){
    v.push_back(c1);
    v.push_back(c2);
    v.push_back(c3);
    v.push_back(c4);
}

void complex_vector::display(){
    for(size_t i = 0; i<4; i++){
        if(i==3){
            std::cout<<std::fixed<<std::setprecision(1)<<v[i].real<<" + ("<<std::fixed<<std::setprecision(1)<<v[i].imag<<"i)\n";
            continue;
        }
        std::cout<<std::fixed<<std::setprecision(1)<<v[i].real<<" + ("<<std::fixed<<std::setprecision(1)<<v[i].imag<<"i) ; ";
    }
}

complex_vector operator + (complex_vector& v1, complex_vector& v2){
    complex c1, c2, c3, c4;
    complex_vector temp(0,0);
    c1.add(v1.v[0], v2.v[0]);
    c2.add(v1.v[1], v2.v[1]);
    c3.add(v1.v[2], v2.v[2]);
    c4.add(v1.v[3], v2.v[3]);
    temp.set_value(c1, c2, c3, c4);
    return temp;
}

complex_vector operator - (complex_vector& v1, complex_vector& v2){
    complex c1, c2, c3, c4;
    complex_vector temp(0,0);
    c1.sub(v1.v[0], v2.v[0]);
    c2.sub(v1.v[1], v2.v[1]);
    c3.sub(v1.v[2], v2.v[2]);
    c4.sub(v1.v[3], v2.v[3]);
    temp.set_value(c1, c2, c3, c4);
    return temp;
}

complex_vector operator * (complex_vector& v1, complex_vector& v2){
    complex c1, c2, c3, c4;
    complex_vector temp(0,0);
    c1.mult(v1.v[0], v2.v[0]);
    c2.mult(v1.v[1], v2.v[1]);
    c3.mult(v1.v[2], v2.v[2]);
    c4.mult(v1.v[3], v2.v[3]);
    temp.set_value(c1, c2, c3, c4);
    return temp;
}

complex_vector operator / (complex_vector& v1, complex_vector& v2){
    complex c1, c2, c3, c4;
    complex_vector temp(0,0);
    c1.div(v1.v[0], v2.v[0]);
    c2.div(v1.v[1], v2.v[1]);
    c3.div(v1.v[2], v2.v[2]);
    c4.div(v1.v[3], v2.v[3]);
    temp.set_value(c1, c2, c3, c4);
    return temp;
}
