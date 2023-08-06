#include <stdio.h>

int main(){
    char str[100];
    int size = 0;
    scanf("%s", str);
    while (str[size] != 0) size++;
    printf("%s\n", str);
    int mid = size/2;
    for (int i = 0; i < mid; i++){
        char cur = str[i];
        str[i] = str[size-1-i];
        str[size-1-i] = cur;
    }
    printf("%s\n", str);
}