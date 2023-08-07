#include <stdio.h>

struct employee
{
    char name[20];
    char id[20];
    int salary;
};

int main(){
    struct employee arr[3];
    for (int i = 0; i < 3; i++)
        scanf("%s %s %d", arr[i].name, arr[i].id, &arr[i].salary);

    for (int i = 0; i < 3; i++)
        printf("%s %s %d \n", arr[i].name, arr[i].id, arr[i].salary);
}