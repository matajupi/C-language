#include <stdio.h>

int main(void)
{
    int b;
    scanf("%d", &b);
    // if (b) printf("Hello\n");
    // else printf("%d", b);

    // if (b < 10) printf("Hello\n");
    // else if (b == 10) printf("world\n");
    // else printf("%d\n", b);

    // switch (b)
    // {
    //     case 1:
    //         printf("Who\n");
    //         break;
    //     case 2:
    //         printf("Is\n");
    //         break;
    //     case 3:
    //         printf("Hello\n");
    //         break;
    //     default:
    //         printf("HHH");
    //         break;
    // }

    switch (b)
    {
        case 1:
        case 2:
        case 3:
            printf("Hello\n");
            break;
        default:
            printf("World\n");
            break;
    }
    return 0;
}
