#include <stdio.h>

// void func1(int);

void func2(int *pvalue);

int main(void) {
    // int i, j;
    // int array[10];
    // printf("%p\n", &i);
    // printf("%p\n", &j);
    // printf("%p\n", array);

    // int i = 10;
    // func1(i);
    // printf("%d\n", i);

    // char str[256];
    // scanf("%255s", &str[0]);
    // printf("%s\n", str);

    // char str[256] = "Kosuke ";
    // scanf("%248s", &str[7]);
    // printf("%s\n", str);

    // int *p;
    // int* q;
    // int* r, s;

    // 代入時の *
    // int *p = NULL; // null pointer
    // int i;
    // p = &i;
    // printf("%p\n", p);
    // printf("%p\n", &i);
    // // 通常モード切り替え
    // // 切り替え時の *
    // *p = 10;
    // printf("%d\n", *p);
    // printf("%d\n", i);

    // pointerを用いれば参照を引数として関数に渡すことにより直接元の変数の値を変更することができる（値渡しでは必ず値がコピーされますので）
    // また複数の帰り値を返すときにも使える（上の方法）

    int value = 10;
    printf("%p\n", &value);
    printf("%d\n", value);
    func2(&value);
    printf("%d\n", value);
    return 0;
}

void func2(int *pvalue) {
    printf("%p\n", pvalue);
    // 通常モードに直して値を変更
    *pvalue = 100;
    return;
}

// void func1(int i) {
//     ++i;
//     printf("%d\n", i);
// }
