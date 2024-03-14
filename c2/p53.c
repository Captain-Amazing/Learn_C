void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
    printf("The quote save in %p\n", msg);
}

char quote[] = "Cookies make you fat";

int main()
{
    fortune_cookie(quote);
    printf("%i\n", sizeof(quote));
    char* t = quote;
    printf("%p, %p, %p, %p, %p\n",quote, t, *t, &t, &quote);
    printf("%s\n", t + 6);
    int nums[] = {1, 2, 3};
    printf("%p, %p\n", nums, 1[nums]);
    return 0;
}