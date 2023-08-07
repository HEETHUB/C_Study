#include <stdio.h>

long getFileSize(FILE *ptr){
    long fpos = ftell(ptr);
    fseek(ptr, 0, SEEK_END);
    long result = ftell(ptr);
    fseek(ptr, fpos, SEEK_SET);
    return result;
}

int main()
{
    FILE *fp = fopen("text.txt", "wt");
    fputs("12345678901234567890", fp);
    fclose(fp);
    
    fp = fopen("text.txt", "rt");
    for (int i = 0; i < 2; i++)
        putchar(fgetc(fp));
    printf("\n");
    printf("%ld\n", getFileSize(fp));
    putchar(fgetc(fp));
    printf("\n");
    fclose(fp);
}