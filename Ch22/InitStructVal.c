#include <stdio.h>
#include <string.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(){
    struct point pos = {10, 20};
    struct person man = {"조희태", "010-1234-5678", 29};
    
    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d \n", man.name, man.phoneNum, man.age);

    struct person man1;
    strcpy(man1.name, "조희태1");
    strcpy(man1.phoneNum, "010-8765-4321");
    man1.age = 29;
    printf("%s %s %d \n", man1.name, man1.phoneNum, man1.age);
}
