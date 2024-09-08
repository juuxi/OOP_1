#include "array.h"
#include <math.h>

TArray::TArray()
{
    arr = nullptr;
    size = 0;
}

TArray::TArray(int numb)
{
    number* arr2 = new number[numb];
    arr = arr2;
    size = numb;
}

istream& operator>> (istream& is, TArray& a)
{
    for (int i = 0; i < a.size; i++)
    {
        is>>a.arr[i];
    }
    return is;
}

ostream& operator<< (ostream& os, TArray& a)
{
    for (int i = 0; i < a.size; i++)
    {
       os<<a.arr[i]<<" ";
    }
    return os;
}

void TArray::change_size(int new_size)
{
    number* arr2 = new number[new_size];
    if (new_size > size)
    {
        for (int i = 0; i < size; i++)
            arr2[i] = arr[i];
    }
    else
    {
        for (int i = 0; i < new_size; i++)
            arr2[i] = arr[i];
    }
    if(arr != nullptr)
        delete[] arr;
    arr = arr2;
    size = new_size;
}

number TArray::count_average()
{
    number avg = 0;
    for (int i = 0; i < size; i++)
    {
        avg += arr[i];
    }
    return avg/size;
}

number TArray::count_average_square()
{
    number avg = count_average();
    number sum_dif = 0;
    for (int i = 0; i < size; i++)
    {
        sum_dif += (avg-arr[i])*(avg-arr[i]);
    }
    number average_square = sqrt(sum_dif/(size-1));
    return average_square;
}

TArray::~TArray()
{
    if(arr != nullptr)
        delete[] arr;
}
