#include <stdio.h>

int main()
{
    const char* cards = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];//JQQ
    cards[1] = cards[0];//jjq
    cards[0] = cards[2];//qjq
    cards[2] = cards[1];//qjj
    cards[1] = a_card;//qkj
    puts(cards);
    return 0;
}