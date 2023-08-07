#include <stdio.h>

int main()
{
    long fpos;

    /* 파일 생성 */
    FILE *fp = fopen("text.txt", "wt");
    fputs("1234-", fp);
    fclose(fp);

    /* 파일 개방 */
    fp = fopen("text.txt", "rt");

    for (int i = 0; i < 4; i++){
        putchar(fgetc(fp));
        fpos = ftell(fp);
        fseek(fp, -1, SEEK_END);
        putchar(fgetc(fp));
        fseek(fp, fpos, SEEK_SET);
    }
    printf("\n");
    fclose(fp);
}