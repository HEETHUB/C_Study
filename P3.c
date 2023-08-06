#include <stdio.h>
int fibo(int num);

int main(){
    int num;
    scanf("%d", &num);
    printf("%d", fibo(num));
}

int fibo(int num){
    if (num <= 2) return 1;
    return fibo(num-1) + fibo(num-2);
}