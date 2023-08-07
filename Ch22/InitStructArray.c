#include <stdio.h>

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(){
    struct person arr[3] = {
        {"조희태", "010", 21},
        {"조태희", "011", 22},
        {"희태조", "012", 23}
    };

    for (int i = 0; i < 3; i++){
        printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
    }
}
