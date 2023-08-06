#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(char str[], int size);

int main(){
    char str[100];
    scanf("%s", str);
    int size = 0;
    while (str[size] != 0)
        size++;
    if (isPalindrome(str, size)) printf("Palindrome입니다.\n");
    else printf("Palindrome이 아닙니다.\n");
}

bool isPalindrome(char str[], int size){
    int idx = 0;
    while (idx < size/2){
        if (str[idx] != str[size-1-idx])
            return false;
        idx++;
    }
    return true;
}