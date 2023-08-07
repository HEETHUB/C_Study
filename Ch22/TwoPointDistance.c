#include <stdio.h>
#include <math.h>

struct point
{
    int xpos;
    int ypos;
};

int main(){
    struct point pos1, pos2;
    double distance;

    scanf("%d %d", &pos1.xpos, &pos1.ypos);
    scanf("%d %d", &pos2.xpos, &pos2.ypos);

    // distance = sqrt((double)((pos1.xpos - pos2.xpos)*(pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos)*(pos1.ypos - pos2.ypos)));
    distance = sqrt((double)((pos1.xpos - pos2.xpos)*(pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos)*(pos1.ypos - pos2.ypos)));
    printf("두 점 사이의 거리는 %g입니다. \n", distance);
}
