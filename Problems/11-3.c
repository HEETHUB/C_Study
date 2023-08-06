#include <stdio.h>

int main(){
    char word[50];
    char ans = 0;
    scanf("%s", word);
    int idx = 0;

    while (word[idx] != 0){
        if (ans < word[idx])
            ans = word[idx];
        idx++;
    }
    printf("%c \n", ans);
}