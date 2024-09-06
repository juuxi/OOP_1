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

istream& operator>> (istream& is, TArray& arr)
{
    for (int i = 0; i < arr.num; i++)
    {
        is>>arr.arr[i];
    }
    return is;
}

TArray::~TArray()
{
    delete[] arr;
}
