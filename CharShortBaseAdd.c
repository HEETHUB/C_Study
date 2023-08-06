#include <stdio.h>

int main(){
    char num1 = 1, num2 = 2, result1 = 0;
    short num3 = 300, num4 = 400, result2 = 0;

    printf("size of num1 & num2 : %d, %d \n", (int)sizeof(num1), (int)sizeof(num2));
    printf("size of num3 & num4 : %d, %d \n", (int)sizeof(num3), (int)sizeof(num4));
    printf("size of char add : %d \n", (int)sizeof(num1+num2));
    printf("size of short add : %d \n", (int)sizeof(num3+num4));

    result1 = num1+num2;
    result2 = num3+num4;
    printf("size of result1 & result2 : %d, %d \n", (int)sizeof(result1), (int)sizeof(result2));
    /*
    일반적으로 CPU가 처리하기에 가장 적합한 크기의 정수 자료형을 int형으로 정의함.
    따라서 int형 연산의 속도가 다른 자료형의 연산 속도에 비해서 동일하거나 더 빠르다.
    그렇다면 char, short형 변수의 필요성은?
    -> 데이터의 양이 많아서 연삭속도보다 데이터의 크기를 줄이는 것이 더 중요한 데이터들
    */
}