#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

typedef struct point Point;

typedef struct person // typedef로 Person 이름 붙일 시 person 생략 가능
{
    char name[20];
    char phoneNum[20];
    int age;
} Person;

void OrgSymTrans(Point *ptr){
    ptr->xpos *= -1;
    ptr->ypos *= -1;
}

int main(){
    Point pos = {10, 20};
    Person man = {"조희태", "010", 21};
    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d \n", man.name, man.phoneNum, man.age);
    OrgSymTrans(&pos);
    printf("%d %d \n", pos.xpos, pos.ypos);
}
