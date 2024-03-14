#include <stdio.h>

int main()
{
    char masked_raider[] = "alive";
    char* jimmy = masked_raider;
    printf("Masked raider is %s, Jimmy is %s\n", masked_raider,
        jimmy);
    masked_raider[0] = 'a';
    masked_raider[1] = 'E';
    masked_raider[2] = 'A';
    masked_raider[3] = 'D';
    masked_raider[4] = '!';
    masked_raider[5] = 'D';
    masked_raider[6] = 'D';
    printf("Masked raider is %s, Jimmy is %s\n", masked_raider,
        jimmy);
    printf("%x,%x,%x,%x,%x\n", masked_raider, jimmy,
        &masked_raider, &jimmy, *(masked_raider-8));
    return 0;
}