#include <stdio.h>
void ComplexFuncOne(int *arr1[], int *arr[][5]){}
void ComplexFuncTwo(int **arr3[], int ***arr4[][5]){}

int main(){
    int *arr1[3];
    int *arr2[3][5];
    int **arr3[5];
    int ***arr4[3][5];

    ComplexFuncOne(arr1, arr2);
    ComplexFuncTwo(arr3, arr4);
}