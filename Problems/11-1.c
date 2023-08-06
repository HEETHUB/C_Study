#include <stdio.h>

int main(){
    char str[100];
    int size = 0;
    scanf("%s", str);
    printf("%s \n", str);
    // size = sizeof(str);
    // printf("%d \n", size);
    while (str[size] != '\0'){
        size++;
    }
    printf("%d \n", size);
}