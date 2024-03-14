#include <stdio.h>

void goSouthEast(int* lat, int* lon)
{
    *lat -= 1;
    *lon += 1;
}
int main()
{
    int latitude = 32;
    int longitude = -64;
    goSouthEast(&latitude, &longitude);
    printf("stop, [%i, %i]\n", latitude, longitude);
    return 0;
}