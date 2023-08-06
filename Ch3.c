#include <stdio.h>
int GCD(int num1, int num2);

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", GCD(num1, num2));
}

int GCD(int num1, int num2){
    int a = num1 % num2;
    int b = num2;
    while (a > 0){
        int cur = a;
        a = b % a;
        b = cur;
    }
    return b;
}