#ifndef FUNCTION_H
#define FUNCTION_H


typedef int intType;
typedef char charType;
typedef double doubleType;


void fillArray(intType arr[], int size);
void ShowArray(intType arr[], int size);
intType findMin(intType arr[], int size);
intType findMax(intType arr[], int size);
void sortArray(intType arr[], int size);
void editValue(intType arr[], int size, int index, intType newValue);

void fillArray(charType arr[], int size);
void ShowArray(charType arr[], int size);
charType findMin(charType arr[], int size);
charType findMax(charType arr[], int size);
void sortArray(charType arr[], int size);
void editValue(charType arr[], int size, int index, charType newValue);

void fillArray(doubleType arr[], int size);
void ShowArray(doubleType arr[], int size);
doubleType findMin(doubleType arr[], int size);
doubleType findMax(doubleType arr[], int size);
void sortArray(doubleType arr[], int size);
void editValue(doubleType arr[], int size, int index, doubleType newValue);

#endif
