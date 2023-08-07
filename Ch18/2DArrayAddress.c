#include <stdio.h>

int main(){
    // int arr2d[3][3];
    // printf("%d \n", arr2d);
    // printf("%d \n", arr2d[0]);
    // printf("%d \n\n", &arr2d[0][0]);
    int iarr[3];
    double darr[7];

    printf("%p\n", iarr);
    printf("%p\n", darr);    
    
    printf("%p\n", iarr+1);
    printf("%p\n", darr+1);    
}