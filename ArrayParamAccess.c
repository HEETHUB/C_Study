#include <stdio.h>
void ShowArrayEle(int *ptr, int len);
void AddArrayEle(int ptr[], int len, int add);

int main(){
    int arr[3] = {1,2,3};
    AddArrayEle(arr, sizeof(arr)/sizeof(int), 1);
    ShowArrayEle(arr, sizeof(arr)/sizeof(int));

    AddArrayEle(arr, sizeof(arr)/sizeof(int), 2);
    ShowArrayEle(arr, sizeof(arr)/sizeof(int));

    AddArrayEle(arr, sizeof(arr)/sizeof(int), 3);
    ShowArrayEle(arr, sizeof(arr)/sizeof(int));
}

void ShowArrayEle(int *ptr, int len){
    for (int i = 0; i < len; i++){
        printf("%d ", ptr[i]);
        // ptr[i]++;
    }
    printf("\n");
}

void AddArrayEle(int ptr[], int len, int add){
    for (int i = 0; i < len; i++){
        ptr[i] += add;
    }
}