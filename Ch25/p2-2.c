#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int*) malloc(sizeof(int) * 5);
    int max = 5;
    int idx = 0;
    int n;
    while (1){
        scanf("%d", &n);
        arr[idx++] = n;
        if (idx >= max){
            arr = realloc(arr, sizeof(int)*(max+3));
            max += 3;
        }
        if (n == -1) break;
    }
    for (int i = 0; i < idx; i++)
        printf("%d ", arr[i]);
    free(arr);
}