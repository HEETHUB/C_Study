#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int spaceIdx(char word[]){
    for (int i = 0; i < strlen(word); i++){
        if (word[i] == ' ') return i;
    }
    return -1;
}

int CompName(char word1[], char word2[]){
    if (spaceIdx(word1) != spaceIdx(word2)) return 0;
    else return !strncmp(word1, word2, spaceIdx(word1));
}

int CompAge(char word1[], char word2[]){
    int idx1 = spaceIdx(word1);
    int idx2 = spaceIdx(word2);

    int age1, age2;
    age1 = atoi(&word1[idx1+1]);
    age2 = atoi(&word2[idx2+1]);
    if (age1 == age2) return 1;
    else return 0;
}

int main(){
    // 1. easy ver
    /*
    char name1[20], name2[20];
    int age1, age2;

    scanf("%s", name1);
    scanf("%d", &age1);
    scanf("%s", name2);
    scanf("%d", &age2);

    if (!strcmp(name1, name2))
        printf("이름이 같습니다.\n");
    else printf("이름이 다릅니다.\n");

    if (age1 == age2)
        printf("나이가 같습니다.\n");
    else printf("나이가 다릅니다.\n");
    */
    // 2. hard ver
    char word1[20];
    char word2[20];
    fgets(word1, sizeof(word1), stdin);
    word1[strlen(word1)-1] = 0;
    fgets(word2, sizeof(word2), stdin);
    word2[strlen(word2)-1] = 0;

    if (CompName(word1, word2)) printf("이름이 같습니다.\n");
    else printf("이름이 다릅니다. \n");
    if (CompAge(word1, word2)) printf("나이가 같습니다. \n");
    else printf("나이가 다릅니다. \n");
}