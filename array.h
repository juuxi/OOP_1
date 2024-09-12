#ifndef TARRAY_H
#define TARRAY_H

#include "number.h"
#include <iostream>

using namespace std;

class TArray
{
    number* arr;
    int size;
public:
    TArray();
    TArray(int);
    friend istream& operator>> (istream&, TArray&);
    friend ostream& operator<< (ostream&, TArray&);
    void change_size(int);
    number count_average();
    number count_average_square();
    void change_element(int, number);
    void sort(bool);
    int get_size();
    ~TArray();
};

#endif // TARRAY_H
