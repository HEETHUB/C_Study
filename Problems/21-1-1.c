#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    // puts(str);
    int sum = 0;
    for (int i = 0; i < strlen(str)-1; i++){
        if (str[i] >= '0' && str[i] <= '9')
            sum += str[i]-'0';
    }    
    printf("%d \n", sum);
}