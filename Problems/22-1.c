#include <stdio.h>

struct employee
{
    char name[20];
    char id[20];
    int salary;
};

int main(){
    struct employee em;
    scanf("%s", em.name);
    scanf("%s", em.id);
    scanf("%d", &em.salary);
    printf("종업원의 이름은 %s, 주민등록번호는 %s, 연봉은 %d입니다.\n", em.name, em.id, em.salary);
}