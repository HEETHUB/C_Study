#include <stdio.h>

int main(){
    char str1[] = "My String";
    char *str2 = "Your String";
    printf("%s %s \n", str1, str2);

    str2 = "Our String";
    printf("%s %s \n", str1, str2);

    str1[0] = 'X';
    // str2[0] = 'X'; 
    printf("%s %s \n", str1, str2);

    printf("Hi String \n");
    printf("%s\n", "Hi String");
    char *ptr = "Hi String";
    printf("%c\n", *ptr);
    printf("%c\n", *(ptr+1));
    printf("%s\n", ptr);
}