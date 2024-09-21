#ifndef TCOMPLEX_H
#define TCOMPLEX_H

#include <math.h>
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
    friend TComplex sqrt (TComplex);

    void operator+= (TComplex);
    TComplex operator- (TComplex);
    TComplex operator/ (int);
    TComplex operator* (TComplex);

    bool operator> (TComplex);
    bool operator< (TComplex);
private:
    double count_module();
    double count_argument();
};

#endif // TCOMPLEX_H
