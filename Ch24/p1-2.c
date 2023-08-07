#include <stdio.h>

int main()
{
    FILE *fp = fopen("mystory.txt", "at");

    if (fp == NULL){
        puts("파일오픈 실패!");
        return -1;
    }
    fputs("#즐겨먹는 음식: 돼지국밥, 고기 \n", fp);
    fputs("#취미: 기타연주 \n", fp);
    fclose(fp);
}