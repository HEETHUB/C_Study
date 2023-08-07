#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

int main(){
    struct point pos1 = {1,2};
    struct point pos2 = {100,200};
    struct point *pptr = &pos1;

    (*pptr).xpos += 4;
    (*pptr).ypos += 5;
    printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

    pptr = &pos2;
    pptr->xpos += 1;
    pptr->ypos += 2;
    printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);

    struct point arr[3];
    arr->xpos = 1;
    arr->ypos = 2;
    printf("%d %d\n", arr->xpos, arr[0].ypos);
    (arr+1)->xpos = 3;
    (arr+1)->ypos = 4;
    printf("%d %d \n", arr[1].xpos, arr[1].ypos);
}