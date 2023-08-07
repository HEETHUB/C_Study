#include <stdio.h>

typedef enum syllable
{
    Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
} Syllable;

void Sound(Syllable sy)
{
    switch (sy)
    {
    case Do:
        puts("도"); return;
    case Re:
        puts("레"); return;
    case Mi:
        puts("미"); return;
    case Fa:
        puts("파"); return;
    case So:
        puts("솔"); return;
    case La:
        puts("라"); return;
    case Ti:
        puts("시"); return;
    default:
        break;
    }
    puts("도레미파솔라시도도솔솔도도!!");
}

enum color1 {RED, BLUE, WHITE, BLACK} // 0부터 차례로 할당
enum color2 {RED=0, BLUE=1, WHITE=2, BLACK=3} // 위와 같음

int main()
{
    Syllable tone;
    for (tone = Do; tone <= Ti; tone++)
        Sound(tone);
}