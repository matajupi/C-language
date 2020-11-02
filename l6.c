#include <stdio.h>

int main(void)
{
    // int data;
    // scanf("%d", &data);
    // printf("%d\n", data);

    // double data;
    // scanf("%lf", &data);
    // printf("%.2f", data);

    // int data1, data2;
    // scanf("%d%d", &data1, &data2);
    // printf("%d\n%d\n", data1, data2);

    // int a;
    // double b;
    // scanf("%d%lf", &a, &b);
    // printf("%d\n%.2f\n", a, b);
    // return 0;

    int max, min, sum;
    scanf("%d , %d", &min, &max);
    sum = (max + min) * (max - min + 1) / 2;
    printf("%d\n", sum);
    return 0;
}
