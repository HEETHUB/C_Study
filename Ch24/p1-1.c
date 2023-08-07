#include <stdio.h>

int main()
{
    FILE *fp = fopen("mystory.txt", "wt");
    char name[20];
    char id[20];
    char phoneNum[20];
    scanf("%s", name);
    fputs("#이름: ", fp);
    fputs(name, fp);
    scanf("%s", id);
    fputs("\n#주민번호: ", fp);
    fputs(id, fp);
    scanf("%s", phoneNum);
    fputs("\n전화번호: ", fp);
    fputs(phoneNum, fp);
    fputs("\n", fp);
    fclose(fp);
}