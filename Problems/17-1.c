#include <stdio.h>

void MaxAndMin(int **max, int **min, int arr[]){
    *max = &arr[0];
    *min = &arr[0];
    for (int i = 1; i < 5; i++){
        if (**max < arr[i])
            *max = &arr[i];
        if (**min > arr[i])
            *min = &arr[i];
    }
}

int main(){
    int *maxPtr;
    int *minPtr;
    int arr[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    
    MaxAndMin(&maxPtr, &minPtr, arr);
    printf("%d %d \n", *minPtr, *maxPtr);
}