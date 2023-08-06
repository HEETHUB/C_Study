#include <stdio.h>

int main(){
    int num1 = 10, num2 = 20, num3 = 30;
    int *arr[3] = {&num1, &num2, &num3};

    printf("%d\n", *arr[0]);
    printf("%d\n", *arr[1]);
    printf("%d\n", *arr[2]);
    printf("%p\n", arr[0]);
    printf("%p\n", arr[1]);
    printf("%p\n", arr[2]);
}