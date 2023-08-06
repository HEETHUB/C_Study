#include <stdio.h>

int main()
{
    int arr[10];
    int idxF = 0, idxB = 9;
    for (int i = 0; i < 10; i++){
        int temp;
        scanf("%d", &temp);
        if (temp % 2 == 0)
            arr[idxB--] = temp;
        else   
            arr[idxF++] = temp;
    }
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
}