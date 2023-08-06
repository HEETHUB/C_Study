#include <stdio.h>
void gugu(int num);

int main(){
    int num1, num2, start, end;
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2) {
        start = num2;
        end = num1;
    }
    else {
        start = num1;
        end = num2;
    }     

    for (int i = start; i <= end; i++){
        gugu(i);
    }
}

void gugu(int num){
    printf("구구단 %d단 시작! \n", num);
    for (int i = 1; i <= 9; i++){
        printf("%d * %d = %d \n", num, i, num*i);
    }
}