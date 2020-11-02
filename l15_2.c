#include <stdio.h>

int getaverage(int *data);

int main(void) {
    // int average, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};
    // average = getaverage(array);
    // printf("%d\n", average);

    int average, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};
    printf("%d\n", array[3]);
    average = getaverage(array);
    printf("%d\n", array[3]);
    printf("%d\n", average);
    return 0;
}

// Clangでは配列名にはその配列の先頭のアドレスが入っているポインタ変数になっている。
// [num]は配列関係なくポインタ変数に動作し、その値のアドレスからnumの数だけ足したアドレスをさす。
// そのため配列を超えて参照してもエラーがでず、恐らく配列として定義してない変数のポインタで使用しても大丈夫なはずだ。
// 配列の宣言の部分では型は前につく宣言の型となりその型の領域が[num]のnumの分だけ確保されるということになる（はず）
//
// 関数のアドレスを保持したい場合は関数ポインタなるものを使用する
// 関数宣言をすると関数名がポインタ変数となり関数のアドレスをさす
// 宣言の書式は
// 戻り値（*変数名）（引数情報）

int getaverage(int *data) {
    int average = 0;
    for (int i = 0; 10 > i; i++) {
        average += data[i];
    }
    data[3] = 111;
    return average / 10;
}
