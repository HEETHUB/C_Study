#include <stdio.h>

int main(){
    int arr[5][5];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++){
        int rSum = 0;
        int cSum = 0;
        for (int j = 0; j < 4; j++){
            rSum += arr[i][j];
            cSum += arr[j][i];
        }
        arr[4][i] = cSum;
        arr[i][4] = rSum;
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}