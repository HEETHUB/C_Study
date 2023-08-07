#include <stdio.h>

void SimpleAdder(int n1, int n2){
    printf("%d + %d = %d \n", n1, n2, n1+n2);
}

void ShowString(char *str){
    printf("%s \n", str);
}

void ArrayFunction(int arr[], int arr1[][3]){
    printf("Array Function printed\n");
}

int main(){
    char *str = "Function Pointer";
    int num1 = 10, num2 = 20;
    int arr[3] = {1,2,3};
    int arr1[2][3] = {{1,2,3},{4,5,6}};


    void (*fptr1)(int, int) = SimpleAdder;
    void (*fptr2)(char *) = ShowString;
    void (*fptr3)(int*, int (*)[3]) = ArrayFunction;

    // 함수 포인터 변수에 의한 호출
    fptr1(num1, num2);
    fptr2(str);
    fptr3(arr, arr1);
}