#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct ractangle
{
    Point upLeft;
    Point downRight;
} Ractangle;

void PrintSize(Ractangle *ptr){
    int size = (ptr->downRight.xpos - ptr->upLeft.xpos)*(ptr->upLeft.ypos - ptr->downRight.ypos);
    printf("the size of the ractangle : %d \n", size);
}

void PrintPoints(Ractangle *ptr){
    printf("points : [%d, %d], [%d, %d], [%d, %d], [%d, %d]\n", 
    ptr->upLeft.xpos, ptr->upLeft.ypos, 
    ptr->downRight.xpos, ptr->upLeft.ypos, 
    ptr->upLeft.xpos, ptr->downRight.ypos, 
    ptr->downRight.xpos, ptr->downRight.ypos);
}

int main(){
    Point uL, dR;
    scanf("%d %d", &uL.xpos, &uL.ypos);
    scanf("%d %d", &dR.xpos, &dR.ypos);
    Ractangle r1 = {uL, dR};
    // printf("%d %d \n%d %d \n", r1.upLeft.xpos, r1.upLeft.ypos, r1.downRight.xpos, r1.downRight.ypos);
    PrintPoints(&r1);
    PrintSize(&r1);
}
