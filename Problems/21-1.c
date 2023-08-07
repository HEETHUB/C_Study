#include <stdio.h>

int main(){
    char ch;
    ch = getchar();
    int diff = 'a' - 'A';
    if (ch < 'A' || ch > 'z')
        printf("잘못된 입력입니다.");
    else{
        if (ch >= 'A' && ch <= 'Z')
            putchar(ch + diff);
        else
            putchar(ch - diff);
    }
    putchar(10);
}