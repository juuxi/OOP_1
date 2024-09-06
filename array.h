#ifndef TARRAY_H
#define TARRAY_H

#include "number.h"
#include <iostream>

using namespace std;

class TArray
{
    number* arr;
    int num;
public:
    TArray();
    TArray(int);
    friend istream& operator>> (istream&, TArray&);
    friend ostream& operator<< (ostream&, TArray&);
    ~TArray();
};

#endif // TARRAY_H
