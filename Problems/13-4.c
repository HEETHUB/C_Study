#include <stdio.h>

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[5];

    while (ptr1 < ptr2){
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    printf("\n");
}