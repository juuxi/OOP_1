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
    os<<endl;
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

void TArray::sort(bool reverse)
{
    for (int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-1-i; j++)
        {
            if(!reverse)
            {
                if(arr[j] > arr[j+1])
                {
                    number temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            else
            {
                if(arr[j] < arr[j+1])
                {
                    number temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
}

void TArray::change_element(int index, number elem)
{
    arr[index] = elem;
}

int TArray::get_size()
{
    return size;
}

TArray::~TArray()
{
    if(arr != nullptr)
        delete[] arr;
}
