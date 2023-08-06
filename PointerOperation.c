#include <stdio.h>

int main()
{
    int num1 = 100, num2 = 100;
    int *pnum;

    pnum = &num1; // 포인터 pnum이 num1을 가리킴
    (*pnum) += 30; // num1 += 30과 같음

    pnum = &num2; // 포인터 pnum이 num2를 가리킴
    (*pnum) -= 30; // num2 -= 30과 같음

    printf("num1:%d, num2:%d \n", num1, num2);
    // 포인터 변수의 다양한 type이 존재하는 이유
    // => 메모리 공간을 참조하는 기준이 되기 때문!!
}