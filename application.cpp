#include "application.h"
#include "array.h"
#include <iostream>

using namespace std;

TApplication::TApplication()
{

}

int TApplication::menu()
{
    int ch;
    cout << "1 - Ввод значений массива" << endl;
    cout << "2 - Расчет среднего и СКО элекментов массива" << endl;
    cout << "3 - Сортировка по возрастсанию/убыванию" << endl;
    cout << "4 - Изменение размера массива" << endl;
    cout << "5 - Изменение значения выбранного элемента массива" << endl;
    cout << "6 - Вывод элементов массива" << endl;
    cout << "0 - Выход" << endl << "> ";
    cin >> ch;
    return ch;
}

int TApplication::exec()
{
    int ch;
    while (true)
    {
        ch = menu();
        switch(ch)
        {
            case 0:
                return 0;
            case 1:
                {
                    int num;
                    cout<<"Введите число элементов" << endl;
                    cin>>num;
                    TArray arr(num);
                    cin>>arr;
                    cout<<arr;
                }
                break;
           case 6:
                //cout<<arr;
            default:
                break;
        }
    }
}
