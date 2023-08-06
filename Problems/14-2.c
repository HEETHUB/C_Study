#include <stdio.h>

void Swap(int *num1, int *num2, int *num3){
    int temp1 = *num1;
    int temp2 = *num2;
    *num1 = *num3;
    *num2 = temp1;
    *num3 = temp2;
}

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d \n", num1, num2, num3);
    Swap(&num1, &num2, &num3);
    printf("%d %d %d \n", num1, num2, num3);
}