#include <stdio.h>

/*
binary data의 입출력 : fread, fwrite
- size_t fread(void * buffer, size_t size, size_t count, FILE * stream);
ex)
int buf[12];
fread((void*)buf, sizeof(int), 12, fp); // fp는 구조체 포인터
=> sizeof(int) 크기의 데이터 12개를 fp로부터 읽어서 배열 buf에 저장하라!!

- size_t fwrite(const void * buffer, size_t size, size_t count, FILE * stream);
ex)
int buf[7] = {1,2,3,4,5,6,7};
fwrite((void*)buf, sizeof(int), 7, fp); // fp는 구조체 포인터
=> sizeof(int) 크기의 데이터 7개를 buf로부터 읽어서 fp에 저장하라!!
*/

int main()
{
    FILE *src = fopen("src.bin", "rb");
    FILE *des = fopen("dst.bin", "wb");
    char buf[20];
    int readCnt;

    if (src == NULL || des == NULL){
        puts("파일오픈 실패!");
        return -1;
    }

    while (1){
        // readCnt = fread((void*)buf, sizeof(int), 20, src);
        readCnt = fread((void*)buf, 1, sizeof(buf), src);

        if (readCnt < sizeof(buf)){
            if (feof(src) != 0){
                fwrite((void*)buf, 1, readCnt, des);
                puts("파일복사 완료");
                break;
            }
            else{
                puts("파일복사 실패");
            }
            break;
        }
        fwrite((void*)buf, 1, sizeof(buf), des);
    }

    fclose(src);
    fclose(des);
}