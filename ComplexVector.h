#ifndef   COMPLEXVECTOR_H
#define   COMPLEXVECTOR_H
#include <vector>
#include "complex.h"

class complex_vector : public complex{
    public:
                complex_vector(double r, double i);
                void set_value(complex c1, complex c2, complex c3, complex c4);
                void set(complex c1);
                void display();
                std::vector<complex> v;
                
                friend complex_vector operator + (complex_vector& v1,complex_vector& v2);
                friend complex_vector operator - (complex_vector& v1,complex_vector& v2); 
                friend complex_vector operator * (complex_vector& v1,complex_vector& v2); 
                friend complex_vector operator / (complex_vector& v1,complex_vector& v2);  
};

#endif