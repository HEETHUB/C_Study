#include <stdio.h>
#include <string.h>

int main(){
    char str1[20];
    char str2[20];
    char str3[40];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strlen(str1)-1] = 0;
    str2[strlen(str2)-1] = 0;

    strncpy(str3, str1, sizeof(str1));
    strncat(str3, str2, sizeof(str2));
    puts(str3);
}