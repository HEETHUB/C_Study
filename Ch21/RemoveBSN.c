#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]){
    int len = strlen(str);
    str[len-1] = 0;
}

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("길이 : %lu, 내용 : %s \n", strlen(str), str);

    RemoveBSN(str);
    printf("길이 : %lu, 내용 : %s \n", strlen(str), str);
}