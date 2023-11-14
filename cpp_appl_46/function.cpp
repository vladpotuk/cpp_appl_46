#include "function.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include<Windows.h>

using namespace std;

// Оголошення функцій для INTEGER
void fillArray(intType arr[], int size) {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
}

void ShowArray(intType arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

intType findMin(intType arr[], int size) {
    return *min_element(arr, arr + size);
}

intType findMax(intType arr[], int size) {
    return *max_element(arr, arr + size);
}

void sortArray(intType arr[], int size) {
    sort(arr, arr + size);
}

void editValue(intType arr[], int size, int index, intType newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}


void fillArray(charType arr[], int size) {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < size; ++i) {
        arr[i] = static_cast<char>('A' + rand() % 26);
    }
}

void ShowArray(charType arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

charType findMin(charType arr[], int size) {
    return *min_element(arr, arr + size);
}

charType findMax(charType arr[], int size) {
    return *max_element(arr, arr + size);
}

void sortArray(charType arr[], int size) {
    sort(arr, arr + size);
}

void editValue(charType arr[], int size, int index, charType newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}

// Оголошення функцій для DOUBLE
void fillArray(doubleType arr[], int size) {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < size; ++i) {
        arr[i] = (rand() % 100) / 10.0;
    }
}

void ShowArray(doubleType arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

doubleType findMin(doubleType arr[], int size) {
    return *min_element(arr, arr + size);
}

doubleType findMax(doubleType arr[], int size) {
    return *max_element(arr, arr + size);
}

void sortArray(doubleType arr[], int size) {
    sort(arr, arr + size);
}

void editValue(doubleType arr[], int size, int index, doubleType newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}
