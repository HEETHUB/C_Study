#include <stdio.h>

int main(){
    double num1 = 5.789;
    double num2 = 3.24 + 5.12;

    printf("%f %f\n", num1, num2);
    printf("literal int size : %d \n", (int)sizeof(7));
    printf("literal double size : %d \n", (int)sizeof(7.14));
    printf("literal char size : %d \n", (int)sizeof('A'));

    /*
    char형 역시 int형으로 저장됨 
    */
}