#include <stdio.h>

int main()
{
    int arr[10];
    int oddArr[10], evenArr[10];
    int oddIdx = 0, evenIdx = 0;
    for (int i = 0; i < 10; i++){
        scanf("%d", &(arr[i]));
        if (arr[i]%2 == 0)
            evenArr[evenIdx++] = arr[i];
        else
            oddArr[oddIdx++] = arr[i];
    }
    // for (int i = 0; i < 10; i++){
    //     printf("%d \n", arr[i]);
    // }
    printf("홀수 출력 : ");
    for (int i = 0; i < oddIdx; i++)
        printf("%d ", oddArr[i]);
    printf("\n");
    printf("짝수 출력 : ");
    for (int i = 0; i < evenIdx; i++)
        printf("%d ", evenArr[i]);
    printf("\n");
}