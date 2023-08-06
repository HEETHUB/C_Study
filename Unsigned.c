#include <stdio.h>

int main(){
    char sch = -128;
    unsigned char uch = 255;

    int sint = -2147483648;
    unsigned int uint = 4294967295;

    printf("%d, %d \n", sch, uch);
    printf("%d, %u \n", sint, uint);
}