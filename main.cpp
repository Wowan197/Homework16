//Лебедев В В
// Задание
// Сделать заголовочный файл с некоторыми математическими функциями.
// Сделать заголовочный файл с функциями по разделению массива на 2 части.
// Сделать программу, которая показывала бы работу функций из ваших заголовочных файлов.
// Выложить результаты на GitHub.
#include <iostream>
#include "Mat_Function.h"
#include "Split_Array.h"

using namespace std;

    int main() {
    const int SIZE = 10;
    const int SIZE_2 = SIZE / 2;

    int arraySource[SIZE];

    InputRandomArray(arraySource,SIZE,1,5);
    PrintArray(arraySource, SIZE);


    int arr_1[SIZE_2];
    int arr_2[SIZE_2];

    SplitEvenArray(arraySource,SIZE,arr_1);
    SplitOddArray(arraySource,SIZE,arr_2);

    cout << "Массив разделен на два массива : " << endl;
    PrintArray(arr_1, SIZE_2);
    PrintArray(arr_2, SIZE_2);

     int summa_1;
     int summa_2;

     summa_1 = SummaArray(arr_1,SIZE_2);
     summa_2 = SummaArray(arr_2,SIZE_2);
     cout << "Сумма чисел первого массива = " << summa_1 << endl;
     cout << "Сумма чисел второго массива = " << summa_2 << endl;

    return 0;

}