#include <stdio.h>
int digitToBinary(int num);

int main(){
    int num;
    scanf("%d", &num);
    printf("%d \n", digitToBinary(num));
}

int digitToBinary(int num){
    int mul = 1;
    int ans = 0;
    while (num > 0){
        ans += mul*(num % 2);
        num /= 2;
        mul *= 10;
    }
    return ans;
}