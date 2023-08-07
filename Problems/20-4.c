#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((int)time(NULL));
    int dice1 = rand()%6+1;
    int dice2 = rand()%6+1;
    printf("주사위1 : %d \n", dice1);
    printf("주사위2 : %d \n", dice2);
}