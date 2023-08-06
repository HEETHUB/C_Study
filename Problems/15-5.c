#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int len);
void MergeSort(int arr[], int len);
void mergeSortHelp(int arr[], int start, int end, int len);
void merge(int arr[], int start, int mid, int end, int len);

int main(){
    int N;
    scanf("%d", &N);
    // int *arr = (int*)malloc(sizeof(int) * N);
    int *arr = malloc(sizeof(int) * N);
    int idx = 0;
    for (int i = 0; i < N; i++)
        scanf("%d", arr+i);

    // BubbleSort(arr, N);
    MergeSort(arr, N);
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]); 
    printf("\n");
    free(arr);
    return 0;
}

void BubbleSort(int arr[], int len){
    for (int i = 0; i < len; i++){
        for (int j = i+1; j < len; j++){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void MergeSort(int arr[], int len){
    mergeSortHelp(arr, 0, len-1, len);
}

void mergeSortHelp(int arr[], int start, int end, int len){
    if (end > start){
        int mid = (start+end)/2;

        mergeSortHelp(arr, start, mid, len);
        mergeSortHelp(arr, mid+1, end, len);
        merge(arr, start, mid, end, len);
    }
}

void merge(int arr[], int start, int mid, int end, int len){
    int temp[len];
    int left = start;
    int right = mid+1;
    int idx = start;
    while (left <= mid && right <= end){
        if (arr[left] < arr[right]) temp[idx++] = arr[left++];
        else temp[idx++] = arr[right++];
    }
    while (left <= mid) temp[idx++] = arr[left++];
    while (right <= end) temp[idx++] = arr[right++];

    for (int i = start; i <= end; i++){
        arr[i] = temp[i];
    }
}