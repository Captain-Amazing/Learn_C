#include <stdio.h>
#include <string.h>

char tracks[][80] = {
        "I left my heart in",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to meternity",
        "The girl from Iwo Jima"
};

void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (strstr(tracks[i], search_for))
            printf("Track %i: '%s'\n", i, tracks[i]);
    }
}

void print_reverse(char* s)
{
    size_t len = strlen(s);
    char* t = s + len - 1;
    while ( t >= s) {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
    
}


int main()
{
    // char search_for[80];
    // while (1) {
    //     printf("Search for:");
    // fgets(search_for, 80, stdin);
    // search_for[strlen(search_for)-1] = '\0';
    // find_track(search_for);
    // }
    print_reverse(tracks[0]);
    return 0;


}