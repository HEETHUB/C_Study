#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char* RSP(int num){
    switch (num)
    {
    case 1:
        return "바위";
    case 2:
        return "가위";
    case 3:
        return "보";
    default:
        break;
    }
    return "잘못된 수를 입력하였습니다.";
}

int Game(int user, int com){
    int re = com - user;
    if (re == 1 || re == -2) return 1;
    else if (re == 0) return 0;
    return -1;
}

char* IntToString(int result){
    switch (result)
    {
    case 1:
        return "이겼습니다!";
    case 0:
        return "비겼습니다!";
    case -1:
        return "졌습니다!";
    default:
        return "잘못된 수 입력";
    }
}

int main(){
    int win = 0, tie = 0, lose = 0;
    while (lose == 0){
        int user;
        printf("바위는 1, 가위는 2, 보는 3 : ");
        scanf("%d", &user);
        srand((int)time(NULL));
        int com = rand()%3+1;
        int result = Game(user, com);
        switch (result)
        {
        case 1:
            win++;
            break;
        case 0:
            tie++;
            break;
        case -1:
            lose++;
            break;
        default:
            break;
        }
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, %s\n", RSP(user), RSP(com), IntToString(result));
    }
    printf("게임의 결과 : %d승 %d무 \n", win, tie);
}

