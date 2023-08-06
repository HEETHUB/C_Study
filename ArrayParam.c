#include <stdio.h>
void ShowArrayEle(int *ptr, int len);

int main(){
    int arr1[3] = {1,2,3};
    int arr2[5] = {4,5,6,7,8};
    for (int i = 0; i < 3; i++){
        printf("%d ", arr1[i]);
    }
    ShowArrayEle(arr1, sizeof(arr1)/sizeof(int));
    ShowArrayEle(arr2, sizeof(arr2)/sizeof(int));
    for (int i = 0; i < 3; i++){
        printf("%d ", arr1[i]);
    }
}

void ShowArrayEle(int *ptr, int len){
    for (int i = 0; i < len; i++){
        // printf("%d ", ptr[i]);
        ptr[i]++;
    }
    printf("\n");
}