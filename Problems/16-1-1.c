#include <stdio.h>

int main()
{
    int arr[3][9];
    for (int i = 2; i <= 4; i++){
        for (int j = 1; j <= 9; j++){
            arr[i-2][j] = i*j;
            printf("%d ", arr[i-2][j]);
        }
        printf("\n");
    }
}