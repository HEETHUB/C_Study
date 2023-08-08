#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int maxlen;
    printf("문자열 최대 길이 입력 : ");
    scanf("%d", &maxlen);
    getchar();
    char * str = (char*)malloc(sizeof(char) * (maxlen+1));
    
    printf("문자열 입력 : ");
    fgets(str, maxlen+1, stdin);
    str[strlen(str)-1] = 0;
    int len = strlen(str);
    // printf("%d\n", len);

    for (int i = len; i >= 0; i--){
        if (str[i] == ' '){
            printf("%s ", &str[i+1]);
            str[i] = 0;
        }
    }
    printf("%s\n", &str[0]);
    free(str);
}