#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Match(int arr[], int com[], int *strike, int *ball){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (arr[i] == com[j]){
                if (i == j) (*strike)++;
                else (*ball)++;
            }
        }
    }
}

int main(){
    // 변수 초기화 및 값 입력
    int arr[3];
    srand((int)time(NULL));
    int com[3];
    for (int i = 0; i < 3; i++){
        com[i] = rand()%10;
        for (int j = 0; j < i; j++){
            while (com[i] == com[j])
                com[i] = rand()%10;
        }
    }
    // printf("%d %d %d \n", com[0], com[1], com[2]);
    // 게임 관련 변수 선언
    int try = 0, stop = 0;
    // 게임 시작
    printf("Start Game! \n");
    while (stop == 0){
        int strike = 0, ball = 0;
        try++;
        printf("3개의 숫자 선택 : ");
        scanf("%d", arr);
        scanf("%d", arr+1);
        scanf("%d", arr+2);
        // printf("%d %d %d \n", arr[0], arr[1], arr[2]);
        Match(arr, com, &strike, &ball);
        printf("%d번째 도전 결과 : %dstrike, %dball!! \n", try, strike, ball);
        if (strike == 3)
            stop = 1;
    }
    printf("정답 : %d %d %d \n", com[0], com[1], com[2]);
    printf("\nGame Over! \n");
}