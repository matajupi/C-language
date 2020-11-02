#include <stdio.h>

int main(void)
{
    // int bool;
    // scanf("%d", &bool);
    // if (bool)
    // {
    //     printf("Hello");
    // }
    // else
    // {
    //     printf("World");
    // }

    int num;
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Hello");
    }
    else if (num == 1)
    {
        printf("world");
    }
    else
    {
        printf("%d", num);
    }
    return 0;
}
