#include <stdio.h>

#define NAME "heetae_cho"
#define AGE 28
#define PRINT_ADDR puts("주소 : 서울시\n")
// #define SQUARE(X) X*X // 오류 많음
#define SQUARE(X) ((X)*(X))
#define PI 3.14
#define PRODUCT(X, Y) ((X)*(Y))
#define CIRCLE_AREA(R) (PRODUCT((R), (R)) * PI)
#define DIFFABS(X, Y) ((X)>(Y) ? (X)-(Y) : (Y)-(X))
#define STRING_JOB(A, B) #A"의 직업은 "#B"입니다."
// #define STNUM(Y, S, P) YSP // YSP라는 변수
// #define STNUM(Y, S, P) Y S P // 13 10 432 라는 이상한 값이 됨
// #define STNUM(Y, S, P) ((Y)*100000 + (S)*1000 + (P)) // 고유번호가 0으로 시작하면 8진수가 됨 
// #define STNUM(Y, S, P) #Y#S#P // 정수로 바꾸고 싶을 때 사용 못함

int main()
{
    double rad = 2.1;
    printf("반지름 %g인 원의 넓이: %g \n", rad, CIRCLE_AREA(rad));
    printf("%s \n", STRING_JOB(조희태, 개발자));
    printf("%s \n", STNUM(13,10,432));
}