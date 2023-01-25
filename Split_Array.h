#pragma once
#include <iostream>
using namespace std;

void InputRandomArray(int arr[], int size, int start, int end) {
    srand(time(0));

    for (int i = 0; i < size; ++i) {
        arr[i] = start + rand() % (end - start);
    }
}

void PrintArray(int arr[], int size)
{
    cout << "{ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

void SplitEvenArray(int arrS[], int size, int arrD[]){
    for (int i = 0, j = 0; i < size; i += 2, j++) {
        arrD[j] = arrS[i];
    }
}
void SplitOddArray(int arrS[], int size, int arrD[]) {
    for (int i = 1, j = 0; i < size; i += 2, j++)
        arrD[j] = arrS[i];
}
