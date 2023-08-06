#include <stdio.h>

int main(){
    char *strArr[3] = {"Simple", "Stringarrrrrrr", "Array"};
    printf("%s \n", strArr[0]);
    printf("%s \n", strArr[1]);
    printf("%s \n", strArr[2]);

    char str[10] = "Simple";
    printf("%s\n", str);
    for (int i = 0; i < 10; i++){
        printf("%d ", str[i]);
    }
    printf("\n");
    printf("%p\n", strArr[0]);
    printf("%p\n", strArr[1]);
    printf("%p\n", strArr[2]);
}