#include "array.h"

TArray::TArray()
{
    num = 0;
}

TArray::TArray(int numb)
{
    number* arr2 = new number[numb];
    arr = arr2;
    num = numb;
}

istream& operator>> (istream& is, TArray& a)
{
    for (int i = 0; i < a.num; i++)
    {
        is>>a.arr[i];
    }
    return is;
}

ostream& operator<< (ostream& os, TArray& a)
{
    for (int i = 0; i < a.num; i++)
    {
       os<<a.arr[i]<<" ";
    }
    return os;
}

TArray::~TArray()
{
    delete[] arr;
}
