#include <stdio.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

int main(){
    Point pos1 = {1, 2};
    Point pos2;
    pos2 = pos1; // 멤버들의 값 복사 -> 주소값은 복사 안됨.

    printf("%p \n%p \n", &pos1, &pos2); 
    printf("%d %d \n", pos1.xpos, pos2.ypos);
    printf("%d %d \n", pos2.xpos, pos2.ypos);
}