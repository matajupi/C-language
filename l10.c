#include <stdio.h>

int main(void) {
    // double money = 1.0;
    // double tom;
    // int aa;
    // int month = 1;
    // scanf("%lf, %d", &tom, &aa);
    // printf("%d aaa\n", aa);
    // while (money < tom) {
    //     printf("%02d month: %7.0f yen\n", month, money);
    //     money *= 2;
    //     month++;
    // }
    // printf("res: %d month\n", month);

    int r;
    double s;
    do {
        printf("R: ");
        scanf("%d", &r);
    } while (r <= 0);
    s = r * r * 3.14;
    printf("Res: %.5f\n", s);
    return 0;
}
