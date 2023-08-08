#include <stdio.h>

typedef struct book
{
    char writer[30];
    char name[100];
    int page;
} Book;

void ClearBuffer(void){
    while (getchar() != '\n');
}

int main()
{
    Book * arr[3];
    printf("도서 정보 입력 \n");
    for (int i = 0; i < 3; i++){
        fputs("저자: ", stdout);
        fgets(arr[i]->writer, sizeof(arr[i]->writer), stdin);
        fputs("제목: ", stdout);
        fgets(arr[i]->name, sizeof(arr[i]->name), stdin);
        fputs("페이지 수: ", stdout);
        scanf("%d", &(arr[i]->page));
        getchar();
    }
    printf("\n\n");
    printf("도서 정보 출력\n");
    for (int i = 0; i < 3; i++){
        printf("book %d\n", i+1);
        printf("저자 : %s", arr[i]->writer);
        printf("제목 : %s", arr[i]->name);
        printf("페이지 수 : %d\n", arr[i]->page);
    }
    printf("\n");
}
