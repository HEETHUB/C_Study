#include <stdio.h>

typedef struct fren
{
    char name[10];
    char sex;
    int age;
} Friend;

int main()
{
    FILE *fp;
    Friend fr1;
    Friend fr2;

    /*** file write ***/
    fp = fopen("friend.bin", "wb");
    printf("이름, 성별, 나이 순 입력: ");
    scanf("%s %c %d", fr1.name, &(fr1.sex), &(fr1.age));
    fwrite((void*)&fr1, sizeof(fr1), 1, fp);
    fclose(fp);

    /*** file read ***/
    fp = fopen("friend.bin", "rb");
    fread((void*)&fr2, sizeof(fr2), 1, fp);
    printf("%s %c %d \n", fr2.name, fr2.sex, fr2.age);
    fclose(fp);
}