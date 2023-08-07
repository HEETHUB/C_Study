#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];

    /**** case 1 ****/
    strcpy(str2, str1);
    puts(str2);

    /**** case 2 ****/
    strncpy(str3, str1, sizeof(str3)); // str3[] 마지막에 null 문자가 없기 때문에 null문자가 나올 때까지 출력이 됨!
    puts(str3);

    /**** case 2 ****/
    strncpy(str3, str1, sizeof(str3)-1);
    str3[sizeof(str3)-1] = 0;
    puts(str3);
}