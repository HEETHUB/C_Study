#include <stdio.h>

int SquareByValue(int num){
    return num*num;
}

void SquareByRef(int *num){
    *num *= *num;
}

int main()
{
    int num;
    scanf("%d", &num);
    int snum = SquareByValue(num);
    SquareByRef(&num);
    printf("%d %d \n", snum, num);
}