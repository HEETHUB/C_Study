#include <stdio.h>
#include <stdbool.h>

int main(){
    int N;
    printf("숫자를 입력하시오 : ");
    scanf("%d", &N);
    int arr[N][N];
    bool visited[N][N];
    int num = 1, rIdx = 0, cIdx = 0, dir = 0;

    while (num <= N*N){
        arr[rIdx][cIdx] = num++;
        visited[rIdx][cIdx] = true;
        switch (dir)
        {
        case 0:
            if (cIdx+1 < N && !visited[rIdx][cIdx+1]) cIdx++;
            else {
                rIdx++;
                dir = 1;
            }
            break;
        case 1:
            if (rIdx+1 < N && !visited[rIdx+1][cIdx]) rIdx++;
            else {
                cIdx--;
                dir = 2;
            }
            break;
        case 2:
            if (cIdx > 0 && !visited[rIdx][cIdx-1]) cIdx--;
            else{
                rIdx--;
                dir = 3;
            } 
            break;
        case 3:
            if (rIdx > 0 && !visited[rIdx-1][cIdx]) rIdx--;
            else{
                cIdx++;
                dir = 0;
            } 
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
}