#ifndef TCOMPLEX_H
#define TCOMPLEX_H

#include <iostream>
using namespace std;

class TComplex
{
    double re, im;
public:
    TComplex();
    TComplex(const int&);
    friend ostream& operator<< (ostream&, TComplex);
    friend istream& operator>> (istream&, TComplex&);
    TComplex operator+= (TComplex);
    TComplex operator- (TComplex);
    TComplex operator/ (int);
    TComplex operator* (TComplex);
};

#endif // TCOMPLEX_H
