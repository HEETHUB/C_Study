#include <stdio.h>

int main()
{
    // 1. char ch로 입출력
    FILE *fp = fopen("mystory.txt", "rt");
    
    if (fp == NULL){
        puts("파일오픈 실패!");
        return -1;
    }
    
    char ch;

    while ((ch = getc(fp)) != EOF){
        printf("%c", ch);
    }

    if (feof(fp) != 0)
        puts("파일출력 완료!");
    else   
        puts("파일출력 실패!");
    fclose(fp);
    printf("\n\n");

    // 2. String으로 입출력
    fp = fopen("mystory.txt", "rt");
    
    if (fp == NULL){
        puts("파일오픈 실패!");
        return -1;
    }

    char buf[20];

    while (fgets(buf, sizeof(buf), fp) != NULL){
        printf("%s", buf);
    }

    if (feof(fp) != 0)
        puts("파일출력 완료!");
    else   
        puts("파일출력 실패!");
    fclose(fp);
}