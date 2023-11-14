#include "function.h"
#include <iostream>

#define INTEGER  

int main() {
    const int size = 5;
    int intArr[size];  
    char charArr[size];  
    double doubleArr[size];  

  
    fillArray(intArr, size);
    std::cout << "Original Integer Array: ";
    ShowArray(intArr, size);

    std::cout << "Min value: " << findMin(intArr, size) << std::endl;
    std::cout << "Max value: " << findMax(intArr, size) << std::endl;

    sortArray(intArr, size);
    std::cout << "Sorted Integer Array: ";
    ShowArray(intArr, size);

    int indexToEditInt = 2;
    int newValueInt = 99;
    editValue(intArr, size, indexToEditInt, newValueInt);
    std::cout << "Integer Array after editing: ";
    ShowArray(intArr, size);

    
    fillArray(charArr, size);
    std::cout << "Original Char Array: ";
    ShowArray(charArr, size);

    std::cout << "Min value: " << findMin(charArr, size) << std::endl;
    std::cout << "Max value: " << findMax(charArr, size) << std::endl;

    sortArray(charArr, size);
    std::cout << "Sorted Char Array: ";
    ShowArray(charArr, size);

    int indexToEditChar = 2;
    char newValueChar = 'Z';
    editValue(charArr, size, indexToEditChar, newValueChar);
    std::cout << "Char Array after editing: ";
    ShowArray(charArr, size);

    
    fillArray(doubleArr, size);
    std::cout << "Original Double Array: ";
    ShowArray(doubleArr, size);

    std::cout << "Min value: " << findMin(doubleArr, size) << std::endl;
    std::cout << "Max value: " << findMax(doubleArr, size) << std::endl;

    sortArray(doubleArr, size);
    std::cout << "Sorted Double Array: ";
    ShowArray(doubleArr, size);

    int indexToEditDouble = 2;
    double newValueDouble = 99.99;
    editValue(doubleArr, size, indexToEditDouble, newValueDouble);
    std::cout << "Double Array after editing: ";
    ShowArray(doubleArr, size);

    return 0;
}
