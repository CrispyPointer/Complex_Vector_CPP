#ifndef  COMPLEX_H
#define  COMPLEX_H

class complex{
    public: 
                complex();
                complex(double r, double i);
                double real;
                double imag;
                void display();
                void add(complex c1, complex c2);
                void sub(complex c1, complex c2);
                void mult(complex c1, complex c2);
                void div(complex c1, complex c2);
};

#endif